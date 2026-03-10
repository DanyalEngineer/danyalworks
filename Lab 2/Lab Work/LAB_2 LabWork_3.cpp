//NAME: Danyal Hassan
//ID: BF25NWELE0750
//SEMESTER: 2nd
//LAB: 2 (Programming)
//DATE: 9/3/2026

#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;  // declare variables

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;  // take input from user

    // Conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}

