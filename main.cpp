#include <iostream>
#include <fstream>
#include <string>
#include "save.pb.h"
//#include "class.h"
//#include "saveLoad.h"
//#include <boost/archive/text_iarchive.hpp>
//#include <boost/archive/text_oarchive.hpp>
using namespace std;

int main()
{
	inventory newInventory;
	//newInventory.initItems();
	//newInventory.listItems();
	//ofstream outfile("Save.dat", ios::binary);
	//outfile.write(reinterpret_cast<char*>(&newInventory), sizeof(newInventory));
	//saveClass("Save.dat", &newInventory);
	//newInventory.initItems();
	//loadClass("SAVE.DAT", &newInventory);
	//ifstream infile("Save.dat", ios::binary);
	//infile.read( reinterpret_cast<char*>(&newInventory), sizeof(newInventory));
	//newInventory.listItems();
	ofstream ofs("save.dat");
	boost::archive::text_oarchive ar(ofs);
	ar & newInventory;
	return 0;

}
