// Name: Danyal Hassan
// Department: Electrical Engineering (Power)
// Registration No: BFNWELE0750
// Section: A

#include <iostream>
using namespace std;

int main() {

    // declaring variables for number, counter and sum
    int n, i = 1, sum = 0;

    // taking a positive number from user
    cout << "Enter a positive integer: ";
    cin >> n;

    // loop will run from 1 up to entered number
    while (i <= n) {

        // adding current value of i into sum
        sum += i;

        // increasing i to move to next number
        i++;
    }

    // displaying the final sum on screen
    cout << "Sum from 1 to " << n << " is: " << sum << endl;

    return 0;
}