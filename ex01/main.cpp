#include <iostream>
#include "iter.hpp"

template <typename T>
void print(T const &x)
{
    std::cout << x << " ";
}

int main()
{
    int intArr[] = {1, 2, 3, 4, 5};
    std::cout << "Int array: ";
    iter(intArr, 5, print);
    std::cout << std::endl;
    
    char charArr[] = {'a', 'b', 'c', 'd', 'e'};
    std::cout << "Char array: ";
    iter(charArr, 5, print);
    std::cout << std::endl;

    double doubleArr[] = {1.1, 2.2, 3.3};
    std::cout << "Double array: ";
    iter(doubleArr, 3, print);
    std::cout << std::endl;
    
    return 0;
}