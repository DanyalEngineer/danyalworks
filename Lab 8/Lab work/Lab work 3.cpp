// Name: Danyal Hassan
// Department: Electrical Engineering (Power)
// Registration No: BFNWELE0750
// Section: A

#include <iostream>
using namespace std;

int main() {
    
    // declaring and initializing 3x3 matrix with values
    int matrix[3][3] = {
        {2, 4, 6},
        {1, 3, 5},
        {7, 8, 9}
    };

    // variable to store total sum of all matrix elements
    int totalSum = 0;

    // displaying sum of each row
    cout << "Sum of each row:" << endl;

    // outer loop is used to access rows
    for(int i = 0; i < 3; i++) {

        // variable to store sum of one row
        int rowSum = 0;

        // inner loop is used to access columns of current row
        for(int j = 0; j < 3; j++) {

            // adding matrix elements of current row
            rowSum += matrix[i][j];
        }

        // displaying sum of current row
        cout << "Row " << i + 1 << " = " << rowSum << endl;

        // adding row sum into total sum
        totalSum += rowSum;
    }

    // displaying sum of each column
    cout << "\nSum of each column:" << endl;

    // outer loop is used to access columns
    for(int j = 0; j < 3; j++) {

        // variable to store sum of one column
        int colSum = 0;

        // inner loop is used to access rows of current column
        for(int i = 0; i < 3; i++) {

            // adding matrix elements of current column
            colSum += matrix[i][j];
        }

        // displaying sum of current column
        cout << "Column " << j + 1 << " = " << colSum << endl;
    }

    // displaying total sum of all matrix elements
    cout << "\nTotal sum of all elements = " << totalSum << endl;

    return 0;
}