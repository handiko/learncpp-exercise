#include <iostream>

// this function will read a value from user and return it to the caller
int getValueFromUser()
{
    int a;

    std::cout << "Please enter an integer: ";
    std::cin >> a;

    return a;
}

int main()
{
    int x, y;

    x = getValueFromUser();     // get the first value
    y = getValueFromUser();     // get the second value

    // do an addition and print it on the screen
    std::cout << x << " + " << y << " = " << x + y << std::endl;

    return 0;
}
