#include <iostream>              
using namespace std;               

int main() {              
	
	double R1,R2, Rnet;         
	// variable declaration and making space in memory
	
	cout<<"enter resistance R1 = ";   
	// diplays message to asking the user to enter 1st resistance
	cin>>R1;                              
	cout<<"enter resistance R2 = ";    
	cin>>R2;                               
	// takes input from user and stores it in variable r2
	
	 
	 Rnet=(R1*R2)/(R1+R2);   
	 // formula for calcultion and stores net resistance in rnet         
	
	cout<<"net resistance is = "<<Rnet<<endl;  /
	/ prints the result and moves to a new line 
	
	return 0;  

}
