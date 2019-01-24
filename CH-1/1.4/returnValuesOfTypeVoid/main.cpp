#include <iostream>

void returnNothing()
{
    std::cout << "Hello world!!" << std::endl;

    // This function does not return anything,
    // so no return statement is needed
}

int main()
{
    // call the function above without any value returned
    returnNothing();

    return 0;
}
