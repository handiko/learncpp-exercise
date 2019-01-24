#include <iostream>

void printA(void)
{
    std::cout << "A" << std::endl;
}

int main()
{
    // This is wrong
    // std::cout << printA() <<std::endl;

    // This is the way it should be
    printA();

    return 0;
}
