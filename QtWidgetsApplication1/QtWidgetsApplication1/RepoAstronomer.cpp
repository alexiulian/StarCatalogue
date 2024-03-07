#include "RepoAstronomer.h"

void RepoAstronomer::readFromFile()
{

	string fileName = "astros.txt";
	ifstream file(fileName);

	if (file.peek() == EOF) {
		file.close();
		return;
	}

	do {

		Astronomer star;
		file >> star;
		this->astronomers.push_back(star);

	} while (!file.eof());
	file.close();

}
