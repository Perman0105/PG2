cmake_minimum_required(VERSION 3.5)

project(Aufgabe1 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        travelagencyui.cpp
        travelagencyui.h
        travelagencyui.ui
        travelagency.h
        travelagency.cpp
        booking.h
        booking.cpp
        flightbooking.h
        flightbooking.cpp
        hotelbooking.h
        hotelbooking.cpp
        trainticket.h
        trainticket.cpp
        rentalcarreservation.h
        rentalcarreservation.cpp
        json.hpp
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Aufgabe1
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        Image.qrc
        hotelbookingui.h hotelbookingui.cpp hotelbookingui.ui
        rentalcarui.h rentalcarui.cpp rentalcarui.ui
        trainticketui.h trainticketui.cpp trainticketui.ui
        flightbookingui.h flightbookingui.cpp flightbookingui.ui


    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Aufgabe1 APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Aufgabe1 SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Aufgabe1
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Aufgabe1 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Aufgabe1)
endif()
set_target_properties(Aufgabe1 PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Aufgabe1
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Aufgabe1)
endif()
