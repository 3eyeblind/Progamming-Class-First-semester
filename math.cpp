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

    std::cout << "Enter your answer: ";
    int userAnswer;
    std::cin >> userAnswer;

    int correctAnswer = num1 + num2;

    std::cout << num1 << std::endl;
    std::cout << "+" << num2 << std::endl;
    std::cout << "Correct Answer: " << correctAnswer << std::endl;

    if (userAnswer == correctAnswer)
    {
        std::cout << "You are correct!" << std::endl;
    }
    else
    {
        std::cout << "Your answer is not correct." << std::endl;
    }

    return 0;
}
