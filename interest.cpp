#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double principal, rate, amount, interest;
    int timesCompounded;

    std::cout << "Enter the principal amount: $";
    std::cin >> principal;

    std::cout << "Enter the interest rate (as a percentage, e.g., 4.25): ";
    std::cin >> rate;

    std::cout << "Enter the number of times interest is compounded per year: ";
    std::cin >> timesCompounded;

    rate = rate / 100;

    amount = principal * pow(1 + rate / timesCompounded, timesCompounded);
    interest = amount - principal;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nInterest Rate: " << rate * 100 << "%\n";
    std::cout << "Times Compounded: " << timesCompounded << "\n";
    std::cout << "Principal: $" << principal << "\n";
    std::cout << "Interest: $" << interest << "\n";
    std::cout << "Amount in Savings: $" << amount << "\n";

    return 0;
}
