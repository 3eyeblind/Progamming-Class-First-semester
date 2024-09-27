#include <iostream>
using namespace std;

int main()
{

    double miles, gallons;

    cout << "Enter the number of miles driven: ";
    cin >> miles;

    cout << "Enter the number of gallons of gas used: ";
    cin >> gallons;

    if (gallons != 0)
    {
        double mpg = miles / gallons;
        cout << "The car gets " << mpg << " miles per gallon." << endl;
    }
    else
    {
        cout << "Gallons of gas cannot be zero." << endl;
    }

    return 0;
}
