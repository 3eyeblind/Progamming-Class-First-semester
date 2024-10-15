#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{

    std::srand(static_cast<unsigned int>(std::time(0)));

    int num1 = std::rand() % 1000;
    int num2 = std::rand() % 1000;

    std::cout << num1 << std::endl;
    std::cout << "+" << num2 << std::endl;

    std::cout << "Press any key to see the answer...";
    std::cin.get();

    int correctAnswer = num1 + num2;
    std::cout << num1 << std::endl;
    std::cout << "+" << num2 << std::endl;
    std::cout << "Correct Answer: " << correctAnswer << std::endl;

    return 0;
}
