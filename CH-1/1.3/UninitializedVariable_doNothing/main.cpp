#include <iostream>

// create dummy function to pretend to manipulate x
void doNothing(const int &x)
{

}

int main()
{
    // define an integer named x
    int x;

    // pretend to manipulate x using a dummy function
    doNothing(x);

    // print any value located at the memory location of x
    // whatever the value left behind before this
    std::cout << x;

    return 0;
}
