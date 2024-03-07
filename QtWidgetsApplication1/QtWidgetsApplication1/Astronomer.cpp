#include "Astronomer.h"

Astronomer::Astronomer()
{

    this->name = "";
    this->constellation = "";


}

Astronomer::Astronomer(string name, string constellation)
{
    this->name = name;
    this->constellation = constellation;

}

istream& operator>>(istream& is, Astronomer& s)
{
    string line;
    getline(is, line);

    char* lineFile = new char[line.length() + 1];
    strcpy_s(lineFile, line.length() + 1, line.c_str());

    char* token = strtok(lineFile, ",");
    string name = token;

    token = strtok(NULL, ",");
    string constellation = token;

    s.setName(name);
    s.setConstellation(constellation);

    delete[] lineFile;

    return is;

}
