#include <iostream>               
#include <cmath>                   
// To use mathematical functions like sqrt()
using namespace std;           

int main() {                                    
    double base, perpendicular, hypotenuse;     
	 // declares three variables toallow for decimal values

    cout << "Enter base: ";                    
	// prompts the user to type in the lenghth of the base 
    cin >> base;                               
	//reads the users input and stores it in the variable base

    cout << "Enter perpendicular: ";           
	// prompts the user for the vertical side of the triangle
    cin >> perpendicular;                    
	// reads the input and stores it in the variable

    hypotenuse = sqrt(base * base + perpendicular * perpendicular);  
	//  uses sqrt to find the square root

    cout << "Hypotenuse = " << hypotenuse;            
	//  prints the final calculated result to the console

    return 0;                                 
}