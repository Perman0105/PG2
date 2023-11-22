#include "travelagency.h"

TravelAgency::TravelAgency()
{

}

void TravelAgency::readFile()
{
    ifstream fileInput;
    fileInput.open("bookings.json",ios_base::in);
    if(fileInput.fail()==true)
    {
        cout<<"File nicht geoefnet"<<endl;
    }
    else
    {
        cout<<"File geoefnet"<<endl;
    }
    json jsonData;
    fileInput >> jsonData;
    fileInput.close();
    int anzahlRenCar=0, anzahlHotel=0, anzahlFlight=0, anzahlTrain=0;
    double wertRenCar=0, wertHotel=0, wertFlight=0, wertTrain=0;
    for (const auto& item : jsonData)
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
            string toDate = item["toDate"];
            r1->setToDate(toDate);
            double price = item["price"];
            r1->setPrice(price);
            wertRenCar=price+wertRenCar;
            if(anzahlRenCar==0)
            {
                //cout<<r1->showDetails()<<endl;
            }
            cout<<r1->showDetails()<<endl;
            anzahlRenCar++;
            bookings.push_back(r1);
            delete r1;

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
            string toDate = item["toDate"];
            h1->setToDate(toDate);
            double price = item["price"];
            h1->setPrice(price);
            wertHotel=price+wertHotel;
            if(anzahlHotel==0)
            {
                //cout<<h1->showDetails()<<endl;
            }
            cout<<h1->showDetails()<<endl;
            anzahlHotel++;
            bookings.push_back(h1);
            delete h1;
        }
          else if(type=="Flight")
        {
            FlightBooking *f1=new FlightBooking();
            string fromDest = item["fromDest"];
            f1->setFromDestination(fromDest);
            string toDest = item["toDest"];
            f1->setToDestination(toDest);
            string fromDate = item["fromDate"];
            f1->setFromDate(fromDate);
            string toDate = item["toDate"];
            f1->setToDate(toDate);
            string airline = item["airline"];
            f1->setAirline(airline);
            double price = item["price"];
            f1->setPrice(price);
            wertFlight=price+wertFlight;
            if(anzahlFlight==0)
            {
                //cout<<f1->showDetails()<<endl;
            }
            cout<<f1->showDetails()<<endl;
            anzahlFlight++;
            bookings.push_back(f1);
            delete f1;
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
            double price = item["price"];
            t1->setPrice(price);
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
            if(anzahlTrain==0)
            {
                //cout<<t1->showDetails()<<endl;
            }
            cout<<t1->showDetails()<<endl;
            anzahlTrain++;
            bookings.push_back(t1);
            delete t1;
        }
    }
    cout<<"Es wurden "<<anzahlFlight<<" Flightbooking im Wert von "<<wertFlight<<" Euro, "<<
    anzahlRenCar<<" Rentalcarreservation im Wert von "<<wertRenCar<<" Euro, "<<anzahlHotel<<" Hotelreservierungen"
    <<" im Wert von "<<wertHotel<<" Euro"<<" und "<<anzahlTrain<<" Zugbuchung im Wert von "<<wertTrain<<" Euro"<<endl;

}
