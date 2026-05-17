// Name: Danyal Hassan
// Department: Electrical Engineering (Power)
// Registration No: BFNWELE0750
// Section: A

#include <iostream>
using namespace std;

int main() {

    // declaring and initializing integer array
    int numbers[] = {10, 20, 30, 40, 50};

    // pointer is pointing to first element of array
    int *ptr = numbers;

    // displaying heading before printing array elements
    cout << "Array elements using pointer arithmetic:" << endl;

    // accessing first array element using pointer
    cout << "1st element: " << *ptr << endl;

    // accessing second element using pointer arithmetic
    cout << "2nd element: " << *(ptr + 1) << endl;

    // accessing third element using pointer arithmetic
    cout << "3rd element: " << *(ptr + 2) << endl;

    // accessing fourth element using pointer arithmetic
    cout << "4th element: " << *(ptr + 3) << endl;

    // accessing fifth element using pointer arithmetic
    cout << "5th element: " << *(ptr + 4) << endl;

    return 0;
}