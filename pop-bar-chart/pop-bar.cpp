#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inputFile("People.txt");

    if (!inputFile)
    {
        cerr << "Error: Unable to open file." << endl;
        return 1;
    }

    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "(each * represents 1,000 people)" << endl;

    int year;
    int population;

      while (inputFile >> year >> population)
    {
        cout << year << " ";

        for (int i = 0; i < population / 1000; ++i)
        {
            cout << "*";
        }

        cout << endl;
    }

    inputFile.close();
    return 0;
}
