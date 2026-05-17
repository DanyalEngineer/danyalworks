// Name: Danyal Hassan
// Department: Electrical Engineering (Power)
// Registration No: BFNWELE0750
// Section: A

#include <iostream>
using namespace std;

// creating structure named Person to store personal information
struct Person {

    // variable to store name
    string name;

    // variable to store age
    int age;

    // variable to store address
    string address;
};

int main() {

    // declaring and initializing structure variable with data
    Person person1 = {"Danyal Hassan", 19, "Karak, KPK"};

    // displaying structure data using dot operator
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Address: " << person1.address << endl;

    return 0;
}