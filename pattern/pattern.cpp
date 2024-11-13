#include <iostream>

int main()
{
    // Displaying Pattern A: Increasing number of '+' signs
    // The first loop prints an increasing number of '+' signs, starting from 1 to 10.
    for (int i = 1; i <= 10; i++)
    {

        for (int j = 0; j < i; j++)
        {
            std::cout << "+";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    // Displaying Pattern B: Decreasing number of '+' signs
    // The second loop prints a decreasing number of '+' signs, starting from 10 down to 1.
    for (int i = 10; i >= 1; i--)
    {

        for (int j = 0; j < i; j++)
        {
            std::cout << "+";
        }
        std::cout << std::endl;
    }

    return 0;
}
