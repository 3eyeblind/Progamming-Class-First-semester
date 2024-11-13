#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inputFile("LineUp.txt");
    string name, first, last;

    // Check if file opens successfully
    if (!inputFile)
    {
        cout << "Error: File could not be opened.\n";
        return 1;
    }

    // Read first name from file
    if (inputFile >> name)
    {
        first = last = name; // Initialize with the first name
    }
    else
    {
        cout << "No data in file.\n";
        return 1;
    }

    // Loop to read remaining names
    while (inputFile >> name)
    {
        if (name < first)
            first = name;
        if (name > last)
            last = name;
    }

    // Close the file
    inputFile.close();

    // Display results
    cout << "Front of the line: " << first << endl;
    cout << "End of the line: " << last << endl;

    return 0;
}
