// Name: Danyal Hassan
// Department: Electrical Engineering (Power)
// Registration No: BFNWELE0750
// Section: A

#include <iostream>
using namespace std;

// creating structure named Student to store student information
struct Student {

    // variable to store student name
    string name;

    // variable to store student age
    int age;

    // variable to store student grade
    char grade;
};

int main() {

    // declaring and initializing structure variable with student data
    Student student1 = {"Danyal Hassan", 19, 'A'};

    // displaying structure member values on screen
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Grade: " << student1.grade << endl;

    return 0;
}