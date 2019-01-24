#include <iostream>

int return5()
{
    // this function returns an integer with a value of 5
    return 5;
}

int main()
{
    // print hello world
    std::cout << "Hello world!" << std::endl;

    // print the return value of return5() which is 5
    std::cout << return5() << std::endl;

    // printf the return value of return() which is 5 and plus 2
    std::cout << return5() + 2 << std::endl;

    return 0;
}
