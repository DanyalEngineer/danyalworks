// Name: Danyal Hassan
// Department: Electrical Engineering (Power)
// Registration No: BFNWELE0750
// Section: A

#include <iostream>
using namespace std;

int main() {
    
    // declaring array to store 5 numbers and variable for sum
    int numbers[5];
    int sum = 0;

    // taking 5 numbers input from user
    cout << "Enter 5 numbers:" << endl;

    // loop is used to store user input inside array
    for(int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    // loop is used to calculate total sum of array elements
    for(int i = 0; i < 5; i++) {

        // adding each number into sum variable
        sum += numbers[i];
    }

    // displaying final sum on screen
    cout << "Sum of the numbers is: " << sum << endl;

    return 0;
}