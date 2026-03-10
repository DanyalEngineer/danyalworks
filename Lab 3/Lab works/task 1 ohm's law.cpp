//NAME: Danyal Hassan
//ID: BF25NWELE0750
//SEMESTER: 2nd
//LAB: 2 (Programming)
//DATE: 9/3/2026
#include <iostream>   
// tells the compiler to include the input/output stream library            
using namespace std;  
// allows us to use common commands like cout and cin    
int main()
// start of the main function, where program execution begins
 {                               
     double voltage,resistance,current; 
// declares three variables of type double to store voltage, resistance, and current
    cout<<"enter voltage ";
// prints the message "enter voltage " to the console                  
     cin>>voltage;                                 
     cout<<"enter current ";                 
     cin>>current; 
// reads the user's input and stores it in the 'current' variable                                 
     resistance=voltage/current;                  
     
     cout<<"voltage = "<<voltage<<"V"<<endl;
// prints the voltage value with a "V" unit and a new line           
     cout<<"current = "<<current<<"A"<<endl;          
     cout<<"resistance = "<<resistance<<" ohm"<<endl;    
     
     return 0;  
	// tells that the program ended successfully  
}

