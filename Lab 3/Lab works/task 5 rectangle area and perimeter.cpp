// Name: Danyal Hassan
// Reg No: BF25NWELE0750
// Program: Area and Perimeter of Rectangle

#include <iostream>        
using namespace std;       
int main()                 
    {
    	
	float length, width;   
	// Variables to store length and width of rectangle
    float area, perimeter; 
	// Variables to store calculated area and perimeter

    // Ask user to enter the length of the rectangle
    cout << "Enter the length of rectangle: ";
    cin >> length;         // Take length value from user

    // Ask user to enter the width of the rectangle
    cout << "Enter the width of rectangle: ";
    cin >> width;          // Take width value from user

    // Calculate the area using formula: Area = length × width
    area = length * width;

    // Calculate the perimeter using formula: 2 × (length + width)
    perimeter = 2 * (length + width);

    // Display calculated area
    cout << "Area of rectangle = " << area << endl;

    // Display calculated perimeter
    cout << "Perimeter of rectangle = " << perimeter << endl;

    return 0;              // Program ends successfully
}