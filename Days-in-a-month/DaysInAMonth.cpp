#include <iostream>
using namespace std;

/*
 * Program: Days in a Month
 * Description: This program prompts the user to enter a month (1-12) and a year.
 *              It then displays the number of days in that month, accounting for leap years.
 *              The criteria for leap years are as follows:
 *              - If a year is divisible by 100, it is a leap year only if divisible by 400.
 *              - If a year is not divisible by 100, it is a leap year if divisible by 4.
 * Example:
 * Input: Month = 2, Year = 2008
 * Output: "29 days"
 *
 * Requirements:
 * - Post code to GitHub
 * - Test for clean compilation before submission
 */

bool isLeapYear(int year)
{
    if (year % 100 == 0)
    {
        return year % 400 == 0;
    }
    return year % 4 == 0;
}

int daysInMonth(int month, int year)
{
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        return isLeapYear(year) ? 29 : 28;
    default:
        return -1; // Error case (month out of range)
    }
}

int main()
{
    int month, year;

    cout << "Enter a month (1–12): ";
    cin >> month;

    if (month < 1 || month > 12)
    {
        cout << "Invalid month. Please enter a number between 1 and 12." << endl;
        return 1;
    }

    cout << "Enter a year: ";
    cin >> year;

    int days = daysInMonth(month, year);
    if (days != -1)
    {
        cout << days << " days" << endl;
    }
    else
    {
        cout << "Error: Invalid month entered." << endl;
    }

    return 0;
}
