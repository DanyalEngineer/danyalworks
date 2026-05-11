// Name: Danyal Hassan
// Department: Electrical Engineering (Power)
// Registration No: BFNWELE0750
// Section: A

#include <iostream>
using namespace std;

// function is created to calculate square of a number
int getSquare(int number)
{
    // multiplying number by itself to get square
    int result = number * number;

    // returning square value back to main function
    return result;
}

int main()
{
    int num, square;

    // taking number input from user
    cout << "Enter a number: ";
    cin >> num;

    // calling function to calculate square
    square = getSquare(num);

    // displaying square on screen
    cout << "Square = " << square << endl;

    return 0;
}