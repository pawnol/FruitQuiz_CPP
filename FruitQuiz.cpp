/*
Fruit Quiz
Pawelski
3/19/2021
Please follow the instructions on the activity guide!
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));
    int selectFruit = rand() % 3;
    std::string mysteryFruit = "", fruitColor = "", guessedColor;
    if (selectFruit == 0)
    {
        mysteryFruit = "banana";
        fruitColor = "yellow";
    }
    if (selectFruit == 1)
    {
        mysteryFruit = "apple";
        fruitColor = "red";
    }
    if (selectFruit == 2)
    {
        mysteryFruit = "orange";
        fruitColor = "orange";
    }

    std::cout << "What is the color of a(n) " << mysteryFruit << "? >> ";
    std::cin >> guessedColor;
    if (guessedColor == fruitColor)
    {
        std::cout << "You guessed correctly!";
    }
    if (guessedColor != fruitColor)
    {
        std::cout << "Incorrect! A(n) " << mysteryFruit << " is " 
            << fruitColor << ".";
    }
    return 0;
}
