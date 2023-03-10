#include <iostream>
#include <string>
#include <cctype>
#include "ascii.h"

bool isUpperCase(char c)
{
    return (c >= 'A' && c <= 'Z');
}

bool isLowerCase(char c)
{
    return (c >= 'a' && c <= 'z');
}
int test_ascii(std::string input)
{

    for (int i = 0; i < input.length(); i++)
    {
        if (isalpha(input[i]))
        {
            std::cout << input[i] << " ";
            std::cout << (int)input[i] << '\n';
        }
        if (isdigit(input[i]))
        {
            std::cout << input[i] << " ";
            std::cout << int(input[i]) << '\n';
        }
        if (isspace(input[i]))
        {
            std::cout << input[i] << " ";
            std::cout << int(input[i]) << '\n';
        }
        if (ispunct(input[i]))
        {
            std::cout << input[i] << " ";
            std::cout << int(input[i]) << '\n';
        }
    }
    return 0;
}