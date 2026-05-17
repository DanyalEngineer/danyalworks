// Name: Danyal Hassan
// Department: Electrical Engineering (Power)
// Registration No: BFNWELE0750
// Section: A

#include <iostream>
using namespace std;

// creating structure named Book to store book information
struct Book {

    // variable to store book title
    string title;

    // variable to store author name
    string author;

    // variable to store book price
    float price;

    // variable to store total pages of book
    int pages;
};

int main() {

    // declaring and initializing first book information
    Book book1 = {"C++ Basics", "Bjarne Stroustrup", 500.0, 300};

    // declaring and initializing second book information
    Book book2 = {"Engineering Mechanics", "Meriam", 750.5, 650};

    // displaying details of first book
    cout << "Book 1 Details:" << endl;
    cout << "Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Price: " << book1.price << endl;
    cout << "Pages: " << book1.pages << endl;

    cout << endl;

    // displaying details of second book
    cout << "Book 2 Details:" << endl;
    cout << "Title: " << book2.title << endl;
    cout << "Author: " << book2.author << endl;
    cout << "Price: " << book2.price << endl;
    cout << "Pages: " << book2.pages << endl;

    return 0;
}