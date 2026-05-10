// Name: Danyal Hassan
// Department: Electrical Engineering (Power)
// Registration No: BFNWELE0750
// Section: A

#include <iostream>
using namespace std;

int main() {
    
    // declaring source array with values and empty destination array
    int source[5] = {5, 10, 15, 20, 25};
    int destination[5];

    // loop is used to copy elements from source array to destination array
    for(int i = 0; i < 5; i++) {

        // copying each element one by one
        destination[i] = source[i];
    }

    // displaying all elements of source array
    cout << "Source array:" << endl;

    // loop for printing source array values
    for(int i = 0; i < 5; i++) {
        cout << source[i] << endl;
    }

    // displaying heading for destination array
    cout << "\nDestination array after copying:" << endl;

    // loop for printing copied values from destination array
    for(int i = 0; i < 5; i++) {
        cout << destination[i] << endl;
    }

    return 0;
}