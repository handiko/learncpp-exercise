#include <iostream>

int return7(void)
{
    return 7;
}

int return9(void)
{
    return 9;
}

int main()
{
    std::cout << "Hello world!" << std::endl << std::endl;

    std::cout << return7() + return9() << std::endl;

    return 0;
}
