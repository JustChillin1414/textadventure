using namespace std;

void saveClass(string fileName, inventory* className)
{
	   ofstream outfile(fileName.c_str(), ios::binary);
	   outfile.write(reinterpret_cast<char*>(&className), sizeof(className));
}
void loadClass(string fileName, inventory* className)
{
	   ifstream infile(fileName.c_str(), ios::binary);
	   infile.read( reinterpret_cast<char*>(&className), sizeof(className));
}
