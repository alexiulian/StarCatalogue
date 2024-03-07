#include "Repo.h"

void Repo::readFromFile()
{

	string fileName = "stars.txt";
	ifstream file(fileName);

	if (file.peek() == EOF) {
		file.close();
		return;
	}

	do {

		Star star;
		file >> star;
		this->stars.push_back(star);

	} while (!file.eof());
	file.close();

}

void Repo::writeToFile()
{

	string fileName = "stars.txt";
	ofstream file(fileName);
	for (auto s : this->stars) {
		file << s.toString() << endl;
	}
	file.close();

}

vector<Star>& Repo::getStarsSortedByConstelation()
{
	sort(this->stars.begin(), this->stars.end(), [](Star s1, Star s2) {return s1.getConstellation() < s2.getConstellation(); });
	return this->stars;
}

void Repo::addStar(Star s)
{
	if(s.getName() == "")
		throw exception();
	if (find(this->stars.begin(), this->stars.end(), s) == this->stars.end())
		this->stars.push_back(s);
	else
		throw exception();

}

void Repo::updateStar(Star s)
{
	if (s.getName() == "")
		throw exception();

	auto it = find(this->stars.begin(), this->stars.end(), s);
	if (it != this->stars.end())
		*it = s;
	else
		throw exception();

}
