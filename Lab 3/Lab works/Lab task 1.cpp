//NAME: Danyal Hassan
//ID: BF25NWELE0750
//SEMESTER: 2nd
//LAB: 2 (Programming)
//DATE: 9/3/2026
#include <iostream>      
// Library used for input and output functions
using namespace std;     
// Allows use of standard C++ names without std::

int main() {
    int age = 30;            
	// Integer variable storing an age value
    double price = 25.99;    
	// Double variable storing a decimal number
    char grade = 'A';        
	// Character variable storing a single letter
    bool isPassed = true;    
	// Boolean variable storing true or false
    string text = "C++";     
	// String variable storing text

    // Displaying the memory size of each variable type
    cout << "Memory used by int: " << sizeof(age) << " bytes" << endl;
    cout << "Memory used by double: " << sizeof(price) << " bytes" << endl;
    cout << "Memory used by char: " << sizeof(grade) << " bytes" << endl;
    cout << "Memory used by bool: " << sizeof(isPassed) << " bytes" << endl;
    cout << "Memory used by string: " << sizeof(text) << " bytes" << endl;

    // Showing the actual values stored in each variable
    cout << "\nStored value of int variable: " << age << endl;
    cout << "Stored value of double variable: " << price << endl;
    cout << "Stored value of char variable: " << grade << endl;
    cout << "Stored value of bool variable: " << isPassed << endl;
    cout << "Stored value of string variable: " << text << endl;

    return 0;   // Program finished successfully
}