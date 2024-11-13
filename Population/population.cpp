#include <iostream>
using namespace std;

int main()
{
    int startingPopulation, days;
    double dailyIncreaseRate;

    // Introductory notes
    //    This program predicts the population growth of organisms over a specified period.

    cout << "Enter the starting number of organisms (minimum 2): ";
    cin >> startingPopulation;
    while (startingPopulation < 2)
    {
        cout << "Invalid input. Enter a number of 2 or greater: ";
        cin >> startingPopulation;
    }

    cout << "Enter the average daily population increase (as a percentage): ";
    cin >> dailyIncreaseRate;
    while (dailyIncreaseRate < 0)
    {
        cout << "Invalid input. Enter a non-negative number: ";
        cin >> dailyIncreaseRate;
    }

    cout << "Enter the number of days they will multiply (minimum 1): ";
    cin >> days;
    while (days < 1)
    {
        cout << "Invalid input. Enter a number of 1 or greater: ";
        cin >> days;
    }

    cout << "\nDay 1: " << startingPopulation << " organisms\n";
    for (int day = 2; day <= days; ++day)
    {
        startingPopulation += startingPopulation * (dailyIncreaseRate / 100.0);
        cout << "Day " << day << ": " << startingPopulation << " organisms\n";
    }

    return 0;
}
