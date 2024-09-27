#include <iostream>
using namespace std;

int main()
{
    double riseRate;
    cout << "Enter the ocean level rise rate in millimeters per year: ";
    cin >> riseRate;

    int years[] = {5, 7, 10};

    for (int i = 0; i < 3; i++)
    {
        cout << "In " << years[i] << " years, the ocean level will be "
             << riseRate * years[i] << " millimeters higher than the current level." << endl;
    }

    return 0;
}
