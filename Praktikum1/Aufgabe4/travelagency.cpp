#include "travelagency.h"

TravelAgency::TravelAgency()
{

}

TravelAgency::~TravelAgency()
{
    for(auto &element : bookings)
    {
        delete element;
    }
}

void TravelAgency::readFile()
{
    ifstream fileInput;
    fileInput.open("bookings.json",ios_base::in);
    if(fileInput.fail()==true)
    {
        cout<<"File Json nicht geoefnet"<<endl;
    }
    else
    {
        cout<<"File Json geoefnet"<<endl;
    }
    json jsonData;
    fileInput >> jsonData;
    fileInput.close();
    deleteVector();
    int anzahlRenCar=0, anzahlHotel=0, anzahlFlight=0, anzahlTrain=0;
    double wertRenCar=0, wertHotel=0, wertFlight=0, wertTrain=0;    
    bool check;
    this->lineNummer=0;
    cout<<bookings.size()<<endl;
        for (const auto& item : jsonData)
        {
            lineNummer++;
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

            string toDate = item["toDate"];
            r1->setToDate(toDate);

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

            string toDate = item["toDate"];
            h1->setToDate(toDate);

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

            string toDate = item["toDate"];
            f1->setToDate(toDate);

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
            cerr << "Error in Linie: "<<lineNummer<<" mit "<<e.what()<<endl;
            this->check=true;
            checkFehler();
            deleteVector();
            break;
        }
}
        if(this->check==false && bookings.size()>0)
        {
            cout<<"Es wurden "<<anzahlFlight<<" Flightbooking im Wert von "<<wertFlight<<" Euro, "<<
            anzahlRenCar<<" Rentalcarreservation im Wert von "<<wertRenCar<<" Euro, "<<anzahlHotel<<" Hotelreservierungen"
            <<" im Wert von "<<wertHotel<<" Euro"<<" und "<<anzahlTrain<<" Zugbuchung im Wert von "<<wertTrain<<" Euro"<<endl;
        }
}


void TravelAgency::readBinaryFile()
{
        ifstream inputFile;
        inputFile.open("bookingsBinary.bin", ios_base :: in|ios_base :: binary);
        if(inputFile.fail()==true)
        {
            cout<<"File nicht geoefnet"<<endl;
        }
        else
        {
            cout<<"File geoefnet"<<endl;
        }
        deleteVector();
        char type;
        char id[39]={};
        double preis;
        char startDatum[9]={};char endDatum[9]={};
        char fromDes[4]={};char toDes[4]={};
        char flugLine[16]={};
        char abholStation[16];char ruckgabeStation[16];
        char firma[16];
        char hotel[16];
        char town[16];
        char startBahnhofs[16];
        char zielBahnhofs[16];
        char deTime[6];
        char arTime[6];
        int anzahlVerbindungsBahnhof;
        char VerbindungsBahnhof[16];
        int anzahlRenCar=0, anzahlHotel=0, anzahlFlight=0, anzahlTrain=0;
        double wertRenCar=0, wertHotel=0, wertFlight=0, wertTrain=0;
        while(!inputFile.eof())
        {
            inputFile.read(reinterpret_cast<char*>(&type),sizeof(char));
            if(type=='F')
            {
                FlightBooking *f1=new FlightBooking();
                inputFile.read(reinterpret_cast<char*>(&id),sizeof(char)*38);
                f1->setId(id);

                inputFile.read(reinterpret_cast<char*>(&preis),sizeof(double));
                f1->setPrice(preis);

                inputFile.read(reinterpret_cast<char*>(&startDatum),sizeof(char)*8);
                f1->setFromDate(startDatum);

                inputFile.read(reinterpret_cast<char*>(&endDatum),sizeof(char)*8);
                f1->setToDate(endDatum);

                inputFile.read(reinterpret_cast<char*>(&fromDes),sizeof(char)*3);
                f1->setFromDestination(fromDes);

                inputFile.read(reinterpret_cast<char*>(&toDes),sizeof(char)*3);
                f1->setToDestination(toDes);

                inputFile.read(reinterpret_cast<char*>(&flugLine),sizeof(char)*15);
                f1->setAirline(flugLine);

                wertFlight=f1->getPrice()+wertFlight;
                if(anzahlFlight==0)
                {
                    cout<<f1->showDetails()<<endl;
                }
                anzahlFlight++;
                bookings.push_back(f1);
            }
            else if(type=='R')
            {
                RentalCarReservation *r1 = new RentalCarReservation();
                inputFile.read(reinterpret_cast<char*>(&id),sizeof(char)*38);
                r1->setId(id);

                inputFile.read(reinterpret_cast<char*>(&preis),sizeof(double));
                r1->setPrice(preis);

                inputFile.read(reinterpret_cast<char*>(&startDatum),sizeof(char)*8);
                r1->setFromDate(startDatum);

                inputFile.read(reinterpret_cast<char*>(&endDatum),sizeof(char)*8);
                r1->setToDate(endDatum);

                inputFile.read(reinterpret_cast<char*>(&abholStation),sizeof(char)*15);
                r1->setPickupLocation(abholStation);

                inputFile.read(reinterpret_cast<char*>(&ruckgabeStation),sizeof(char)*15);
                r1->setReturnLocation(ruckgabeStation);

                inputFile.read(reinterpret_cast<char*>(&firma),sizeof(char)*15);
                r1->setCompany(firma);

                wertRenCar=r1->getPrice()+wertRenCar;
                if(anzahlRenCar==0)
                {
                    cout<<r1->showDetails()<<endl;
                }
                anzahlRenCar++;
                bookings.push_back(r1);
            }
            else if(type=='H')
            {
                HotelBooking *h1 = new HotelBooking();
                inputFile.read(reinterpret_cast<char*>(&id),sizeof(char)*38);
                h1->setId(id);

                inputFile.read(reinterpret_cast<char*>(&preis),sizeof(double));
                h1->setPrice(preis);

                inputFile.read(reinterpret_cast<char*>(&startDatum),sizeof(char)*8);
                h1->setFromDate(startDatum);

                inputFile.read(reinterpret_cast<char*>(&endDatum),sizeof(char)*8);
                h1->setToDate(endDatum);

                inputFile.read(reinterpret_cast<char*>(&hotel),sizeof(char)*15);
                h1->setHotel(hotel);

                inputFile.read(reinterpret_cast<char*>(&town),sizeof(char)*15);
                h1->setTown(town);

                wertHotel=h1->getPrice()+wertHotel;
                if(anzahlHotel==0)
                {
                    cout<<h1->showDetails()<<endl;
                }
                anzahlHotel++;
                bookings.push_back(h1);
            }
            else
            {
                TrainTicket *t1=new TrainTicket();
                inputFile.read(reinterpret_cast<char*>(&id),sizeof(char)*38);
                t1->setId(id);

                inputFile.read(reinterpret_cast<char*>(&preis),sizeof(double));
                t1->setPrice(preis);

                inputFile.read(reinterpret_cast<char*>(&startDatum),sizeof(char)*8);
                t1->setFromDate(startDatum);

                inputFile.read(reinterpret_cast<char*>(&endDatum),sizeof(char)*8);
                t1->setToDate(endDatum);

                inputFile.read(reinterpret_cast<char*>(&startBahnhofs),sizeof(char)*15);
                t1->setFromDestination(startBahnhofs);

                inputFile.read(reinterpret_cast<char*>(&zielBahnhofs),sizeof(char)*15);
                t1->setToDestination(zielBahnhofs);

                inputFile.read(reinterpret_cast<char*>(&deTime),sizeof(char)*5);
                t1->setDepartureTime(deTime);

                inputFile.read(reinterpret_cast<char*>(&arTime),sizeof(char)*5);
                t1->setArrivalTime(arTime);

                wertTrain=t1->getPrice()+wertTrain;

                inputFile.read(reinterpret_cast<char*>(&anzahlVerbindungsBahnhof), sizeof(int));
                t1->setAnzahlStation((int)anzahlVerbindungsBahnhof);

                if((int)anzahlVerbindungsBahnhof>0)
                {
                    for(int i=0;i<(int)anzahlVerbindungsBahnhof;i++)
                    {
                        inputFile.read(reinterpret_cast<char*>(&VerbindungsBahnhof),sizeof(char)*15);
                        t1->setConnectingStations(VerbindungsBahnhof);
                    }
                }
                if(anzahlTrain==0)
                {
                   cout<<t1->showDetails()<<endl;
                }
                anzahlTrain++;
                bookings.push_back(t1);
            }
        }
        cout<<"Es wurden "<<anzahlFlight<<" Flightbooking im Wert von "<<wertFlight<<" Euro, "<<
        anzahlRenCar<<" Rentalcarreservation im Wert von "<<wertRenCar<<" Euro, "<<anzahlHotel<<" Hotelreservierungen"
           <<" im Wert von "<<wertHotel<<" Euro"<<" und "<<anzahlTrain<<" Zugbuchung im Wert von "<<wertTrain<<" Euro"<<endl;
}

void TravelAgency::checkFehler()
{
    char wahl;
    cout<<"Haben Sie die Datei korrigiert? (j/n) "; cin>>wahl;
        if (wahl=='j')
        {
                if(this->check=false)
                {
                cout<<"Sie haben schon Datei korrigiert"<<endl;
                readFile();
                }
                else
                {
                    cout<<"!!! Sie korrigieren noch nicht die Datei !!! "<<endl;
                    readFile();
                }

        }
        else if (wahl=='n')
        {
                if(this->check=true)
                {
                cout<<"!!! Bitte korrigieren Sie die Datei "<<endl;
                readFile();
                }
                else
                {
                    cout<<"Sie haben schon Datei korrigiert"<<endl;
                    readFile();
                }
        }
        else
        {
            cout<<"!!! Falsche Taste !!! "<<" Geben Sie wieder nochmals ein "<<endl;
            checkFehler();
        }
}

void TravelAgency::deleteVector()
{
    bookings.clear();
}

