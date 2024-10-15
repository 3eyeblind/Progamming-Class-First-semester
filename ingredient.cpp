#include <iostream>
using namespace std;

int main()
{

    const int originalYield = 48;

    const double sugarPerBatch = 1.5;
    const double butterPerBatch = 1.0;
    const double flourPerBatch = 2.75;

    int desiredCookies;
    double sugarNeeded, butterNeeded, flourNeeded;

    cout << "Enter the number of cookies you want to make: ";
    cin >> desiredCookies;

    sugarNeeded = (sugarPerBatch / originalYield) * desiredCookies;
    butterNeeded = (butterPerBatch / originalYield) * desiredCookies;
    flourNeeded = (flourPerBatch / originalYield) * desiredCookies;

    cout << "\nFor " << desiredCookies << " cookies, you will need:\n";
    cout << sugarNeeded << " cups of sugar\n";
    cout << butterNeeded << " cups of butter\n";
    cout << flourNeeded << " cups of flour\n";

    return 0;
}
