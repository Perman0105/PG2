#include <iostream>
#include "travelagency.h"
#include "travelagency.cpp"
using namespace std;

int main()
{
    TravelAgency *travel= new TravelAgency;
    travel->readFile();
    delete travel;
}
