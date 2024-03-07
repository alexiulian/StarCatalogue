#pragma once
#include <string>
#include <vector>
#include <fstream>
#include "Astronomer.h"
class RepoAstronomer
{
private:
	vector<Astronomer> astronomers;
public:
	RepoAstronomer() {};
	~RepoAstronomer() {};
	int getSize() { return this->astronomers.size(); };
	void readFromFile();
	vector<Astronomer> getAstronomers() { return this->astronomers; };
	void addAstronomer(Astronomer s) { this->astronomers.push_back(s); };
};

