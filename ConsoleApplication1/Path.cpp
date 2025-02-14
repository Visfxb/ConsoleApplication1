#include "Path.h"

Path::Path()
{
    number = 0;
    start_station = "undefined";
    end_station = "undefined";
    price = 0;
    len = 0;
}

Path::Path(int number, string start_station, string end_station, float price, float len)
{
    this->number = number;
    this->start_station = start_station;
    this->end_station = end_station;
    this-> price = price;
    this-> len = len;
}

int Path::getNumber() const {return number;}

string Path::getStartStation() const {return start_station;}

string Path::getEndStation() const {return end_station;}

float Path::getPrice() const {return price;}

float Path::getLen() const {return len;}

void Path::setPrice(float price)
{
    if (price > 0)
        this->price = price;
}

void Path::showInfo() const
{
    cout << "-----------------------\n";
    cout << "Number: " << number << endl;
    cout << "Start station: " << start_station << endl;
    cout << "End station: " << end_station << endl;
    cout << "Price: " << price << endl;
    cout << "Len: " << len << endl;
}
