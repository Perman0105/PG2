#include "travelagency.h"

TravelAgency::TravelAgency()
{

}

TravelAgency::~TravelAgency()
{
    bookings.clear();
}

void TravelAgency::readFile()
{
    ifstream fileInput;
    fileInput.open("bookings.json",ios_base::in);
    json jsonData;
    fileInput >> jsonData;
    deleteVector();
    int anzahlRenCar=0, anzahlHotel=0, anzahlFlight=0, anzahlTrain=0;
    double wertRenCar=0, wertHotel=0, wertFlight=0, wertTrain=0;
        for (const auto& item : jsonData)
        {
            try
          {
            string type = item["type"];
            if(type=="RentalCar")
            {
            RentalCarReservation *r1=new RentalCarReservation();
            string pickupLocation = item["pickupLocation"];
            r1->setPickupLocation(pickupLocation);

            string returnLocation = item["returnLocation"];
            r1->setReturnLocation(returnLocation);

            string company = item["company"];
            r1->setCompany(company);

            string fromDate = item["fromDate"];
            r1->setFromDate(fromDate);

            QDate frDate = QDate::fromString(r1->getQFromDate(),"yyyyMMdd");
            QDateEdit *frDateEdit = new QDateEdit;
            frDateEdit->setDate(frDate);
            QDate selectedFrDate = frDateEdit->date();
            QString frDateString = selectedFrDate.toString("dd-MM-yyyy");
            r1->setQFromDate(frDateString);

            string toDate = item["toDate"];
            r1->setToDate(toDate);

            QDate tDate = QDate::fromString(r1->getQToDate(),"yyyyMMdd");
            QDateEdit *toDateEdit = new QDateEdit;
            toDateEdit->setDate(tDate);
            QDate selectedToDate = toDateEdit->date();
            QString toDateString = selectedToDate.toString("dd-MM-yyyy");
            r1->setQToDate(toDateString);

            double price = item["price"];
            if (!item["price"].is_number())
            {
                throw std::invalid_argument("Fehler: Price von Rentalcar ist keinen numerischen Wert.");
            }
            else
            {
                r1->setPrice(price);
                if(pickupLocation.empty() || returnLocation.empty() || company.empty() || fromDate.empty() || toDate.empty())
                    {
                        throw std::invalid_argument("Fehler: Nicht alle Attribute wurden ausgefuellt.");
                    }
                else
                {                        
                        wertRenCar = r1->getPrice()+wertRenCar;
                        anzahlRenCar++;
                        bookings.push_back(r1);
                }
            }           

        }
         else if(type=="Hotel")
        {
            HotelBooking *h1=new HotelBooking();
            string hotel = item["hotel"];
            h1->setHotel(hotel);

            string town = item["town"];
            h1->setTown(town);

            string fromDate = item["fromDate"];
            h1->setFromDate(fromDate);

            QDate frDate = QDate::fromString(h1->getQFromDate(),"yyyyMMdd");
            QDateEdit *frDateEdit = new QDateEdit;
            frDateEdit->setDate(frDate);
            QDate selectedFrDate = frDateEdit->date();
            QString frDateString = selectedFrDate.toString("dd-MM-yyyy");
            h1->setQFromDate(frDateString);

            string toDate = item["toDate"];
            h1->setToDate(toDate);

            QDate tDate = QDate::fromString(h1->getQToDate(),"yyyyMMdd");
            QDateEdit *toDateEdit = new QDateEdit;
            toDateEdit->setDate(tDate);
            QDate selectedToDate = toDateEdit->date();
            QString toDateString = selectedToDate.toString("dd-MM-yyyy");
            h1->setQToDate(toDateString);

            double price = item["price"];
            if (!item["price"].is_number())
            {
                throw std::invalid_argument("Fehler: Price von Hotel ist keinen numerischen Wert.");
            }
            else
            {
                h1->setPrice(price);
                if(hotel.empty() || town.empty() || fromDate.empty() || toDate.empty())
                {
                    throw std::invalid_argument("Fehler: Nicht alle Attribute wurden ausgefuellt.");
                }
                else
                {
                    wertHotel = h1->getPrice()+wertHotel;
                    anzahlHotel++;
                    bookings.push_back(h1);
                }
             }
           }
          else if(type=="Flight")
        {
            FlightBooking *f1=new FlightBooking();
            string fromDate = item["fromDate"];           
            f1->setFromDate(fromDate);

            QDate frDate = QDate::fromString(f1->getQFromDate(),"yyyyMMdd");
            QDateEdit *frDateEdit = new QDateEdit;
            frDateEdit->setDate(frDate);
            QDate selectedFrDate = frDateEdit->date();
            QString frDateString = selectedFrDate.toString("dd-MM-yyyy");
            f1->setQFromDate(frDateString);

            string toDate = item["toDate"];
            f1->setToDate(toDate);

            QDate tDate = QDate::fromString(f1->getQToDate(),"yyyyMMdd");
            QDateEdit *toDateEdit = new QDateEdit;
            toDateEdit->setDate(tDate);
            QDate selectedToDate = toDateEdit->date();
            QString toDateString = selectedToDate.toString("dd-MM-yyyy");
            f1->setQToDate(toDateString);

            string airline = item["airline"];
            f1->setAirline(airline);

            string fromDest = item["fromDest"];
            string toDest = item["toDest"];

            if (fromDest.length() != 3 || toDest.length() != 3)
            {
                throw invalid_argument("Fehler: Das Flughafenkuerzel darf nur aus drei Zeichen bestehen.");
            }
            else
            {
                f1->setFromDestination(fromDest);
                f1->setToDestination(toDest);
            }
            double price = item["price"];
            if (!item["price"].is_number())
            {
                throw invalid_argument("Fehler: Price von Hotel ist keinen numerischen Wert.");
            }
            else
            {
                f1->setPrice(price);
                if(airline.empty() || fromDate.empty() || toDate.empty())
                    {
                       throw invalid_argument("Fehler: Nicht alle Attribute wurden ausgefuellt.");
                    }
                else
                    {
                        wertFlight=f1->getPrice()+wertFlight;
                        anzahlFlight++;
                    bookings.push_back(f1);
                    }
            }
        }
        else
        {
            TrainTicket *t1=new TrainTicket();
            string fromDest = item["fromStation"];
            t1->setFromDestination(fromDest);

            string toDest = item["toStation"];
            t1->setToDestination(toDest);

            string depatureTime = item["departureTime"];
            t1->setDepartureTime(depatureTime);

            string arrivalTime = item["arrivalTime"];
            t1->setArrivalTime(arrivalTime);

            string fromDate=item["fromDate"];
            t1->setFromDate(fromDate);
            QDate frDate = QDate::fromString(t1->getQFromDate(),"yyyyMMdd");
            QDateEdit *frDateEdit = new QDateEdit;
            frDateEdit->setDate(frDate);
            QDate selectedFrDate = frDateEdit->date();
            QString frDateString = selectedFrDate.toString("dd-MM-yyyy");
            t1->setQFromDate(frDateString);

            double price = item["price"];
            if (!item["price"].is_number())
            {
                throw invalid_argument("Fehler: Price von Hotel ist keinen numerischen Wert.");
            }
            else
            {
                t1->setPrice(price);
                if(fromDest.empty() || toDest.empty() || depatureTime.empty() || arrivalTime.empty() || fromDate.empty())
                {
                throw invalid_argument("Fehler: Nicht alle Attribute wurden ausgefuellt.");
                }
                else
                {
                wertTrain=t1->getPrice()+wertTrain;
                anzahlTrain++;
                    if (item.find("connectingStations") != item.end())
                    {
                        if (!item["connectingStations"].empty())
                        {
                            for (auto &value : item["connectingStations"])
                            {
                                t1->setConnectingStations(value);
                            }
                        }
                    }
                    bookings.push_back(t1);
                }
            }
         }
       }
        catch (const std::exception& e)
        {
            this->check=true;
            deleteVector();
            break;
        }
    }
        string pr="Es wurden "+to_string(anzahlFlight)+" Flightbooking im Wert von "+to_string(wertFlight)+" Euro, "+
                    to_string(anzahlRenCar)+" Rentalcarreservation im Wert von "+to_string(wertRenCar)+" Euro, "+to_string(anzahlHotel)+" Hotelreservierungen"
                +" im Wert von "+to_string(wertHotel)+" Euro"+" und "+to_string(anzahlTrain)+" Zugbuchung im Wert von "+to_string(wertTrain)+" Euro";
        setPrint(pr);
        QString qString = QString::fromStdString(pr);
}

void TravelAgency::deleteVector()
{
        bookings.clear();
}

string TravelAgency::getPrint() const
{
        return print;
}

void TravelAgency::setPrint(const string &newPrint)
{
        this->print = newPrint;
}

bool TravelAgency::getCheck() const
{
        return check;
}

void TravelAgency::resetCheck()
{
        this->check=false;
}


string TravelAgency::getShowDetails(int pos)
{
        return bookings[pos]->showDetails();
}


int TravelAgency::getBookingSize()
{
        return bookings.size();
}

string TravelAgency::checkType(string type)
{
        string details=" ";
        for(int i=0;i<bookings.size();i++)
        {
            if(bookings[i]->getType()==type)
            {
            details ="\n"+ getShowDetails(i)+details;
            }
        }
        return details;
}

string TravelAgency::getType(int pos)
{
        return bookings[pos]->getType();
}

Booking *TravelAgency::getObjectAtPos(int pos)
{
        return bookings.at(pos);
}




