#include <iostream>
#include "travelagency.h"
#include "travelagency.cpp"
using namespace std;

int main()
{
    TravelAgency *travel= new TravelAgency;
    cout<<"-Welche File moechten Sie oeffnen ?"<<endl;
    cout<<"1: Json File"<<endl;
    cout<<"2: Binary File"<<endl;
    cout<<"x: Ende"<<endl;
    char taste;
    cout<<"Taste: "; cin>>taste;
    while(taste!='x')
    {
        switch(taste)
        {
            case '1':
            {
                travel->readFile();
                break;
            }
            case '2':
            {
                travel->readBinaryFile();
                break;
            }
            default:
            {
                cout<<"!!! Falsche Taste!!!"<<endl;
                break;
            }

        }
        cout<<"Taste: "; cin>>taste;
    }
    delete travel;
}
