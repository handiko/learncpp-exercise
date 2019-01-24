#include <iostream>

int return5(void)
{
    return 5;
}

int main()
{
    std::cout << "Hello world!" << std::endl << std::endl;

    // This is the wrong way. You miss the ()
    // std::cout << return5 << std::endl;

    // This is the right way
    std::cout << return5() << std::endl;

    return 0;
}
