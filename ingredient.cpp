#include <iostream>
using namespace std;

int main()
{
    // Original recipe yields
    const int originalYield = 48;

    // Original ingredient amounts
    const double sugarPerBatch = 1.5;  // cups of sugar
    const double butterPerBatch = 1.0; // cups of butter
    const double flourPerBatch = 2.75; // cups of flour

    // Variables to hold user input and calculated ingredient amounts
    int desiredCookies;
    double sugarNeeded, butterNeeded, flourNeeded;

    // Ask user for the desired number of cookies
    cout << "Enter the number of cookies you want to make: ";
    cin >> desiredCookies;

    // Calculate the required amounts of each ingredient
    sugarNeeded = (sugarPerBatch / originalYield) * desiredCookies;
    butterNeeded = (butterPerBatch / originalYield) * desiredCookies;
    flourNeeded = (flourPerBatch / originalYield) * desiredCookies;

    // Display the results
    cout << "\nFor " << desiredCookies << " cookies, you will need:\n";
    cout << sugarNeeded << " cups of sugar\n";
    cout << butterNeeded << " cups of butter\n";
    cout << flourNeeded << " cups of flour\n";

    return 0;
}
