# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Aufgabe1_autogen"
  "CMakeFiles\\Aufgabe1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Aufgabe1_autogen.dir\\ParseCache.txt"
  )
endif()
