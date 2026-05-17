// Name: Danyal Hassan
// Department: Electrical Engineering (Power)
// Registration No: BFNWELE0750
// Section: A

#include <iostream>
using namespace std;

int main() {

    // declaring and initializing an integer variable
    int num = 25;

    // declaring integer pointer variable
    int *ptr;

    // storing address of num variable inside pointer
    ptr = &num;

    // displaying value of variable directly
    cout << "Value of num: " << num << endl;

    // displaying value using pointer through dereferencing
    cout << "Value using pointer (*ptr): " << *ptr << endl;

    return 0;
}