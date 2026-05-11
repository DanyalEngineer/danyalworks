// Name: Danyal Hassan
// Department: Electrical Engineering (Power)
// Registration No: BFNWELE0750
// Section: A

#include <iostream>
using namespace std;

// function is created with two parameters to multiply numbers
void multiply(int num1, int num2)
{
    // calculating product by multiplying both numbers
    int product = num1 * num2;

    // displaying product on screen
    cout << "Product = " << product << endl;
}

int main()
{
    // calling function and passing two values
    multiply(5, 4);

    return 0;
}