#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double sales, advancePay, commissionRate = 0.0, commission, remainingPay;

    cout << "Enter the salesperson's monthly sales: ";
    cin >> sales;
    cout << "Enter the amount of advanced pay for this salesperson: ";
    cin >> advancePay;

    if (sales < 10000)
    {
        commissionRate = 0.05;
    }
    else if (sales >= 10000 && sales <= 14999)
    {
        commissionRate = 0.10;
    }
    else if (sales >= 15000 && sales <= 17999)
    {
        commissionRate = 0.12;
    }
    else if (sales >= 18000 && sales <= 21999)
    {
        commissionRate = 0.14;
    }
    else if (sales >= 22000)
    {
        commissionRate = 0.16;
    }

    commission = sales * commissionRate;

    remainingPay = commission - advancePay;

    cout << fixed << setprecision(2);
    cout << "\nPay Results\n";
    cout << "-----------\n";
    cout << "Sales: $" << sales << endl;
    cout << "Commission Rate: " << commissionRate << endl;
    cout << "Commission: $" << commission << endl;
    cout << "Advanced Pay: $" << advancePay << endl;
    cout << "Remaining Pay: $" << remainingPay << endl;

    if (remainingPay < 0)
    {
        cout << "The salesperson owes Crazy Al's $" << -remainingPay << " for the advance." << endl;
    }

    return 0;
}
