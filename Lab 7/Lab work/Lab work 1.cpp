// Name: Danyal Hassan
// Department: Electrical Engineering (Power)
// Registration No: BFNWELE0750
// Section: A

#include <iostream>
using namespace std;

int main() {
    
    // declaring and storing 5 integer values inside array
    int numbers[5] = {10, 20, 30, 40, 50};

    // displaying heading before printing array elements
    cout << "Array elements are: " << endl;

    // loop is used to access and print each array element
    for(int i = 0; i < 5; i++) {

        // printing values stored at each index of array
        cout << numbers[i] << endl;
    }

    return 0;
}