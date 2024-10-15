#include <iostream>
#include <cmath>

using namespace std;

void displayMenu()
{
    cout << "\n--- Calculator Menu ---\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Power\n";
    cout << "6. Exit\n";
    cout << "Choose an operation: ";
}

int main()
{
    int choice;
    double num1, num2, result;
    bool keepRunning = true;

    while (keepRunning)
    {
        displayMenu();
        cin >> choice;

        if (choice == 6)
        {
            cout << "Exiting the calculator.\n";
            keepRunning = false;
            continue;
        }

        if (choice < 1 || choice > 6)
        {
            cout << "Invalid choice. Please select a valid operation.\n";
            continue;
        }

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch (choice)
        {
        case 1:
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case 4:
            if (num2 != 0)
            {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            }
            else
            {
                cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        case 5:
            result = pow(num1, num2);
            cout << "Result: " << num1 << " ^ " << num2 << " = " << result << endl;
            break;
        }
    }

    return 0;
}
