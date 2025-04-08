#include <iostream>
#include "Array.hpp"

int main() {

    Array<int> empty;
    Array<int> numbers(5);

    for (unsigned int i = 0; i < numbers.size(); i++)
    {
        numbers[i] = i + 1;
    }
    
    std::cout << "Array contents: ";
    for (unsigned int i = 0; i < numbers.size(); i++)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    
    Array<int> copy = numbers;
    numbers[0] = 100;
    
    std::cout << "Original after modification: ";
    for (unsigned int i = 0; i < numbers.size(); i++)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    
    std::cout << "Copy not change: ";
    for (unsigned int i = 0; i < copy.size(); i++)
    {
        std::cout << copy[i] << " ";
    }
    std::cout << std::endl;
    
    try
    {
        std::cout << "Accessing invalid index: ";
        std::cout << numbers[10] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    return 0;
}