#include <iostream>

void doPrint()
{
    std::cout << "I'm in doPrint() now !!" << std::endl;
}

int main()
{
    std::cout << "Starting in main()" << std::endl;
    doPrint();
    std::cout << "Ending in main()" << std::endl;

    return 0;
}
