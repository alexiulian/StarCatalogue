#pragma once
#include <string>
#include <iostream>
using namespace std;

class Astronomer
{
private:
	string name;
	string constellation;
public:
	Astronomer();
	Astronomer(string name, string constellation);
	~Astronomer() {};
	string getName() { return this->name; };
	string getConstellation() {
		return this->constellation;
	};
	string toString() {
		return this->name + "," + this->constellation;
	}
	void setName(string name) { this->name = name; };
	void setConstellation(string constellation) { this->constellation = constellation; };
	friend istream& operator>>(istream& is, Astronomer& s);
	

};

