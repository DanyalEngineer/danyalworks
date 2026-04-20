// Name: Danyal Hassan 
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0750
// Section: A

#include <iostream>   
// Library used for input and output
using namespace std;  
// Allows using cout and cin without std::

int main()
{
    int i = 1;   
	// Initialize variable i with value 1

    do
    {
        cout << i << endl;  
		// Display the value of i
        i++;                
		// Increase value of i by 1
    }
    while(i <= 10);   // Loop continues until i becomes greater than 10

    return 0;   // End of the program
}