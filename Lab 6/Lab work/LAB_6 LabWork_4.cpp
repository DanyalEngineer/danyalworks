// Name: Danyal Hassan
// Department: Electrical Engineering (Power)
// Registration No: BFNWELE0750
// Section: A

#include <iostream>
using namespace std;

int main() {

    // variable to store number of rows entered by user
    int rows;

    // taking total rows input from user
    cout << "Enter number of rows: ";
    cin >> rows;

    // outer loop is used to control the number of rows
    for (int i = 1; i <= rows; i++) {

        // inner loop is used to print stars in each row
        for (int j = 1; j <= i; j++) {

            // printing star pattern on screen
            cout << "* ";
        }

        // moving cursor to next line after each row
        cout << endl;
    }

    return 0;
}