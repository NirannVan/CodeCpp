#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/* CREATE OUTPUT FIlE
int main()
{
    ofstream outFile;
//    fstream outFile;

    string outputFileName = "text.txt";

    
    outFile.open(outputFileName);
  //  outFile.open(outputFileName,ios::out);

    
    if (outFile.is_open())
    {
        outFile << "Hello there" << endl;
        outFile << 12223 << endl;
        outFile.close();
    }
    else
    {
        cout << "Could not create file: " << outputFileName << endl;
    }


    return 0;
} 
*/

/* Reading INPUT FILE
int main()
{

    string inFileName = "text.txt";
    ifstream inFile;

    inFile.open(inFileName);

    if (inFile.is_open())
    {
        string line;

        while (inFile) // !inFile.eof()
        {
            getline(inFile, line);
            cout << line << endl;
        }
        inFile.close();
    }
    else
    {
        cout << "Cannot open file: " << inFileName << endl;
    }

    return 0;
}

*/


//parsing text file
int main()
{
    string fileName = "stats.txt";

    ifstream input;
    input.open(fileName);

    if (!input.is_open())
    {
        return 1;
    }

    while (input)
    {
        string line;
        input.ignore();//3 ways to ingore space
        getline(input, line, ':');

        int population;
        input >> population;

        //input.get();
        //input >> ws;

        if (!input)
        {
            break;
        }

        cout << "'" << line  << "'" << " -- " << "'" << population << "'" << endl;

    }

    input.close();
    
    return 0;
}