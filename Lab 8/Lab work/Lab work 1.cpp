// Name: Danyal Hassan
// Department: Electrical Engineering (Power)
// Registration No: BFNWELE0750
// Section: A

#include <iostream>
using namespace std;

int main() {
    
    // declaring and initializing a 3x3 matrix with values
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // displaying heading before printing matrix
    cout << "Matrix elements are:" << endl;

    // outer loop is used to control rows of matrix
    for(int i = 0; i < 3; i++) {

        // inner loop is used to access columns of matrix
        for(int j = 0; j < 3; j++) {

            // printing each matrix element
            cout << matrix[i][j] << " ";
        }

        // moving cursor to next line after one row is printed
        cout << endl;
    }

    return 0;