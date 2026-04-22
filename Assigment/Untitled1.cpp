#include <iostream> 
using namespace std; 
int main() { 

// i. Declare variables 
double voltage, current, resistance; 

// ii. Display message 
cout << "Welcome to Object Oriented Programming in C++!" << endl; 

// iii. Read age 
int age; 
cout << "Enter age: "; 
cin >> age; 

// iv. Temperature check 
double temperature; 
cout << "Enter temperature: "; 
cin >> temperature; 
if (temperature > 100) 
cout << "Overheating detected!" << endl; 

// v. Area of circle 
double r, area; 
cout << "Enter radius: "; 
cin >> r; 
area = 3.14159 * r * r; 
cout << "Area = " << area << endl; 

// vi. Print x, y, z 
int x, y, z; 
cout << "Enter x, y, z: "; 
cin >> x >> y >> z; 
cout << x << "," << y << "," << z << endl; 

// vii. Sum of voltage and current 
cout << "Enter voltage and current: "; 
cin >> voltage >> current; 
double total = voltage + current; 
cout << "Total = " << total << endl; 

// viii. Division by zero check 
int denominator; 
cout << "Enter denominator: "; 
cin >> denominator; 
if (denominator == 0) 
cout << "Error: Division by zero" << endl; 

// ix. Increment count 
int count; 
cout << "Enter count: "; 
cin >> count; 
count++; 
cout << "New count = " << count << endl; 

// x. Read three floating numbers 
float a, b, c; 
cout << "Enter a, b, c: "; 
cin >> a >> b >> c; 

// xi. Series resistance 
double r1, r2, r3; 
cout << "Enter three resistances (series): "; 
cin >> r1 >> r2 >> r3; 
double series = r1 + r2 + r3; 
cout << "Total Resistance (Series) = " << series << endl; 

// xii. Parallel resistance 
cout << "Enter three resistances (parallel): "; 
cin >> r1 >> r2 >> r3; 
double parallel = 1 / (1/r1 + 1/r2 + 1/r3); cout << "Total 
Resistance (Parallel) = " << parallel << endl; 


// xiii. Voltage division rule 
double R1 = 10, R2 = 20, V = 12; 
double V_R2 = (V * R2) / (R1 + R2); 
cout << "Voltage across R2 = " << V_R2 << endl; 

// xiv. Current division rule 
double Req = (R1 * R2) / (R1 + R2); 
double I_total = V / Req; 
double I_R2 = (I_total * R1) / (R1 + R2); 
cout << "Current through R2 = " << I_R2 << endl; 

// xv. GPA calculation 
int n; 
cout << "Enter number of subjects: "; 
cin >> n; 
float totalPoints = 0, totalCredits = 0; 
for (int i = 0; i < n; i++) { 
float grade, credit; 
cout << "Enter grade point and credit hours: "; 
cin >> grade >> credit; 
totalPoints += grade * credit; 
totalCredits += credit; 
} 
float GPA = totalPoints / totalCredits; 
cout << "Semester GPA = " << GPA << endl; 
return 0; 
}
