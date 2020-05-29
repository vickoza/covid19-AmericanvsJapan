// covid19-AmericanvsJapan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    auto AmericanPopulation = 354'000'000;
    auto AmericanCovid19Deaths = 100'000;
    auto JapanPopulation = 126'000'000;
    auto JapanCovid19Deaths = 850;
    auto AmericaDeathPercent = (100.0 * AmericanCovid19Deaths) / AmericanPopulation;
    auto JapanDeathPercent = (100.0 * JapanCovid19Deaths) / JapanPopulation;
    std::string answer;
    std::cout << "There are a total of " << AmericanCovid19Deaths << " deaths for a  population of " << AmericanPopulation << " for a percentage of "
        << std::setprecision(4) << std::fixed << AmericaDeathPercent << "% in America with a lockdown.\n";
    std::cout << "There are a total of " << JapanCovid19Deaths << " deaths for a  population of " << JapanPopulation << " for a percentage of "
        << std::setprecision(7) << std::fixed << JapanDeathPercent << "% in Japan without a lockdown.\n";
    do
    {
        std::cout << "Was the lockdown successful in the United State of America?\n";
        std::cin >> answer;
    } while (answer.empty() || (answer[0] != 'n' && answer[0] != 'N' && answer[0] != 'y' && answer[0] != 'Y'));
    if (AmericaDeathPercent > JapanDeathPercent)
    {
        if (answer[0] == 'n' || answer[0] == 'N')
            std::cout << "You are correct!!!\n";
        else
            std::cout << "You are death worshipper or just plain wrong\n";
    }
    else if(AmericaDeathPercent < JapanDeathPercent)
    {
        if (answer[0] == 'y' || answer[0] == 'Y')
            std::cout << "You are correct!!!\n";
        else
            std::cout << "You are death worshipper or just plain wrong\n";
    }
    else
    {
        std::cout << "It does not matter\n";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
