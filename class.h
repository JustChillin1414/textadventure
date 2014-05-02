#include <iostream>
#include <fstream>

//#include <boost/archive/text_iarchive.hpp>
//#include <boost/archive/text_oarchive.hpp>

using namespace std;

class inventory
{
private:
	string items[20];
	//string test;
	/*friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		ar & test;
	}*/
public:
	void initItems()
	{
		//add function to read list of items
		cin >> items[0];
		//test = "Test!";
	}
	bool hasItem(string itemName)
	{
		for(int i=0; i<20; i++)
		{
			if(itemName==items[i])
			{
				//cout << "Found item!";
				return true;
			}
		}
		//cout << "Didn't find item!";
		return false;
	}
	void listItems()
	{
		for(int i=0; i<20; i++)
		{
			cout << items[i];
		}
	}
};
