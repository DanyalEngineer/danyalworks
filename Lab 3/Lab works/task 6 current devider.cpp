// Name: Danyal Hassan
// Reg No: BF25NWELE0750
// Program: Current Divider Rule

#include <iostream>        
using namespace std;       

int main()                 
// Main function where the program begins
{
    float R1, R2;          
	// Variables to store resistance values
    float total;           
	// Variable for total current
    float I1, I2;          
	// Variables for branch currents

    // Ask user to enter first resistance
    cout << "Enter value of resistance R1: ";
    cin >> R1;

    // Ask user to enter second resistance
    cout << "Enter value of resistance R2: ";
    cin >> R2;

    // Ask user to enter total current flowing in the circuit
    cout << "Enter total current: ";
    cin >> total;

    // Apply Current Divider Rule to calculate current in first branch
    I1 = total * (R2 / (R1 + R2));

    // Apply Current Divider Rule to calculate current in second branch
    I2 = total * (R1 / (R1 + R2));

    // Display calculated current for branch 1
    cout << "Current through branch 1 (I1) = " << I1 << endl;

    // Display calculated current for branch 2
    cout << "Current through branch 2 (I2) = " << I2 << endl;

    return 0;              // Program finished successfully
}