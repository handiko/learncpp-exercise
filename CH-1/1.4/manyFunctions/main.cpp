#include <iostream>

void printA(void)
{
    std::cout << "A" << std::endl;
}

void printB(void)
{
    std::cout << "B" << std::endl;
}

void printAB(void)
{
    printA();
    printB();
}

int main()
{
    std::cout << "Hello world!" << std::endl << std::endl;

    std::cout << "Starting in main()" << std::endl;
    printAB();
    std::cout << "Ending main()" << std::endl;

    return 0;
}
