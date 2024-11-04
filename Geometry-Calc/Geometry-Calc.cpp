#include <iostream>
using namespace std;

// Geometry Calculator Program
// Presents a menu with options to calculate the area of a circle, rectangle, or triangle, or to quit the program.
// If the user selects an option, the program will provide the info selected

int main()
{
    int choice;
    const double PI = 3.14159;

    do
    {
        cout << "Geometry Calculator\n";
        cout << "1. Calculate the Area of a Circle\n";
        cout << "2. Calculate the Area of a Rectangle\n";
        cout << "3. Calculate the Area of a Triangle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (1–4): ";
        cin >> choice;

        if (choice == 1)
        {

            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            if (radius >= 0)
            {
                double area = PI * radius * radius;
                cout << "The area of the circle is: " << area << endl;
            }
            else
            {
                cout << "Error: Radius cannot be negative.\n";
            }
        }
        else if (choice == 2)
        {

            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            if (length >= 0 && width >= 0)
            {
                double area = length * width;
                cout << "The area of the rectangle is: " << area << endl;
            }
            else
            {
                cout << "Error: Length and width cannot be negative.\n";
            }
        }
        else if (choice == 3)
        {

            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            if (base >= 0 && height >= 0)
            {
                double area = base * height * 0.5;
                cout << "The area of the triangle is: " << area << endl;
            }
            else
            {
                cout << "Error: Base and height cannot be negative.\n";
            }
        }
        else if (choice == 4)
        {
            cout << "Exiting program.\n";
        }
        else
        {
            cout << "Error: Invalid choice. Please select 1, 2, 3, or 4.\n";
        }
    } while (choice != 4);

    return 0;
}
