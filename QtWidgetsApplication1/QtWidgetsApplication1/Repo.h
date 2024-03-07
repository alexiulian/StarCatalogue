#pragma once
#include "Star.h"
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;


class Repo
{
private:
	vector<Star> stars;
public:
	Repo() {};
	~Repo() {};
	int getSize(){ return this->stars.size(); };
	void readFromFile();
	void writeToFile();
	vector<Star>& getStars() { return this->stars; };
	vector<Star>& getStarsSortedByConstelation() ;
	void addStar(Star s);
	void updateStar(Star s);


};

