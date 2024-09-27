#include <iostream>
using namespace std;

int main()
{
    int totalCustomers;
    double energyDrinkCustomersPercent = 0.15;
    double citrusDrinkCustomersPercent = 0.58;

    cout << "Enter the number of customers surveyed: ";
    cin >> totalCustomers;

    int energyDrinkCustomers = totalCustomers * energyDrinkCustomersPercent;

    int citrusDrinkCustomers = energyDrinkCustomers * citrusDrinkCustomersPercent;

    cout << "Approximate number of customers who purchase one or more energy drinks per week: "
         << energyDrinkCustomers << endl;

    cout << "Approximate number of customers who prefer citrus-flavored energy drinks: "
         << citrusDrinkCustomers << endl;

    return 0;
}
