#include "Star.h"
#include <iostream>


using namespace std;
Star::Star()
{
	this->name = "";
	this->constellation = "";
	this->ra = 0;
	this->dec = 0;
	this->diameter = 0;


}

Star::Star(string name, string constellation, int ra, int dec, int diameter)
{
	this->name = name;
	this->constellation = constellation;
	this->ra = ra;
	this->dec = dec;
	this->diameter = diameter;
	

}

bool Star::operator==(const Star& s)
{
	if(this->name == s.name)
		return true;
	return false;
}

istream& operator>>(istream& is, Star& s)
{
	string line;
	getline(is, line);

	char* lineFile = new char[line.length() + 1];
	strcpy_s(lineFile, line.length() + 1, line.c_str());

	char* token = strtok(lineFile, ",");
	string name = token;

	token = strtok(NULL, ",");
	string constellation = token;

	token = strtok(NULL, ",");
	int ra = atoi(token);

	token = strtok(NULL, ",");
	int dec = atoi(token);

	token = strtok(NULL, ",");
	int diameter = atoi(token);

	s.setName(name);
	s.setConstellation(constellation);
	s.setRa(ra);
	s.setDec(dec);
	s.setDiameter(diameter);

	delete[] lineFile;

	return is;
}

ostream& operator<<(ostream& os, Star& s)
{
	os << s.toString() << endl;
	return os;
}
