#include <iostream>

int getNumbers(void)
{
    return 5;

    // this will never executed since it is preceeded by a return statement
    // so it will always only returns 5
    return 7;
}

int main()
{
    std::cout << "Hello world!" << std::endl << std::endl;

    // These two statements will always print 5,
    // since the statement "return 7" above preceeded by the "return 5",
    // so the "return 7" never executed
    std::cout << getNumbers() << std::endl;
    std::cout << getNumbers() << std::endl;

    return 0;
}
