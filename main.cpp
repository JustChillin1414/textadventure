#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream outSaveFile;
	outSaveFile.open("saveFile.txt");
	outSaveFile << "[currentLocation]\r\n";
	outSaveFile << "bedroom\r\n";
	outSaveFile << "closet";
	outSaveFile.close();

	ifstream inSaveFile;
	inSaveFile.open("saveFile.txt");
	string line;
	string parameter;
	string currentLocation = "init";
	while(!inSaveFile.eof())
	{
		inSaveFile >> line;
		if(line.find("[")!=string::npos)
		{
			unsigned first = line.find("[");
			unsigned last = line.find("]");
			parameter = line.substr(first+1, last-first-1);
		}
		//cout << line << "\n";
		if(parameter == "currentLocation")
		{
			if(line.find(parameter)!=string::npos)
			{
				inSaveFile >> line;
				//cout << line;
			}
			currentLocation=line;
			cout << currentLocation << "\n";
		}
	}
	//cout << currentLocation;
}
