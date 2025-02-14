#pragma once
#include <iostream>
#include <string>
using namespace std;

class Path
{
	int number;
	string start_station;
	string end_station;
	float price;
	float len;
public:
	Path();
	Path(int number, string start_station, string end_station, float price, float len);
	int getNumber()const;
	string getStartStation()const;
	string getEndStation()const;
	float getPrice()const;
	float getLen()const;

	void setPrice(float price);

	void showInfo() const;

};

