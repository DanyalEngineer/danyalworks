// Name: Danyal Hassan
// reg: BF25NWELE0750
// Program: Final Velocity Calculation

#include <iostream>          // Library used for input and output operations
using namespace std;         // Allows use of standard names like cout and cin

int main()                   
// Program execution starts here
{
    double v, u, a, t;       
	// Declaring variables for velocity, acceleration, and time

    // Ask the user to enter the initial velocity
    cout << "Enter initial velocity (u): ";
    cin >> u;

    // Ask the user to enter the acceleration
    cout << "Enter acceleration (a): ";
    cin >> a;

    // Ask the user to enter the time
    cout << "Enter time (t): ";
    cin >> t;

    // Apply the physics formula v = u + a × t to calculate final velocity
    v = u + a * t;

    // Display the values entered by the user
    cout << "Initial Velocity: " << u << " m/s" << endl;
    cout << "Acceleration: " << a << " m/s^2" << endl;
    cout << "Time: " << t << " seconds" << endl;

    // Show the calculated final velocity
    cout << "Final Velocity: " << v << " m/s" << endl;

    return 0;               
	// Indicates that the program finished successfully
}