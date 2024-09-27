#include <iostream>
using namespace std;

int main()
{
    const double riseRate = 1.5; // Ocean level rise rate in millimeters per year
    int years[] = {5, 7, 10};    // Years for which we will calculate the rise

    // Output the ocean level rise for specified years
    for (int i = 0; i < 3; i++)
    {
        cout << "In " << years[i] << " years, the ocean level will be "
             << riseRate * years[i] << " millimeters higher than the current level." << endl;
    }

    return 0;
}
