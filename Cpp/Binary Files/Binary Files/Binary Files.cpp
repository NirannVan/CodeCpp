#include <iostream>
#include <fstream>

using namespace std;

#pragma pack(push,1)

struct Person
{
	char name[50];
	int heigh;
	double weight;
};

#pragma pack(pop)

int main()
{
	Person someone = { "Frodo",220,0.8 };

	string fileName = "test.txt";

	// WRITE BINARY FILE ////////////////////////////////////////

	fstream outputFile;

	outputFile.open(fileName, ios::binary|ios::out);

	if (outputFile.is_open())
	{

		//outputFile.write((char *)&someone,sizeof(Person));
		outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

		outputFile.close();
	}
	else {
		cout << "Could not create file " + fileName << endl;
	}

	// READ BINARY FILE ////////////////////////////////////////

	Person someoneElse = {};

	ifstream inputFile;

	inputFile.open(fileName, ios::binary);

	if (inputFile.is_open())
	{

		//outputFile.write((char *)&someone,sizeof(Person));
		inputFile.read(reinterpret_cast<char*>(&someoneElse), sizeof(Person));

		inputFile.close();
	}
	else {
		cout << "Could not read file " + fileName << endl;
	}

	cout << someoneElse.name << ", " << someoneElse.heigh << ", " << someoneElse.weight << endl;

	return 0;
}