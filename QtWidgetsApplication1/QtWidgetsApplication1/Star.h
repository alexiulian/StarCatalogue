#pragma once
#include <string>
#include <iostream>
using namespace std;
class Star
{
private:
	string name;
	string constellation;
	int ra;
	int dec;
	int diameter;

public:
		Star();
		Star(string name, string constellation, int ra, int dec, int diameter);
		~Star() {};
		string getName() { return this->name; };
		string getConstellation() {
			return this->constellation;
		};

		string toString() {
			return this->name + "," + this->constellation + "," + to_string(this->ra) + "," + to_string(this->dec) + "," + to_string(this->diameter);
		}

		int getRa() { return this->ra; };
		int getDec() {return this->dec;};
		int getDiameter() { return this->diameter; };
		void setName(string name) { this->name = name; };
		void setConstellation(string constellation) { this->constellation = constellation; };
		void setRa(int ra) { this->ra = ra; };
		void setDec(int dec) { this->dec = dec; };
		void setDiameter(int diameter) { this->diameter = diameter; };
		friend istream& operator>>(istream& is, Star& s);
		friend ostream& operator<<(ostream& os, Star& s);
		bool operator==(const Star& s);
		
};

