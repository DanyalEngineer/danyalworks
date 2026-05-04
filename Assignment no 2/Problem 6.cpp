#include <iostream>
using namespace std;

// da topper maloomawal function
void findTopper(string names[], int marks[], int size) {
    int maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (marks[i] > marks[maxIndex]) {
            maxIndex = i; // da loya marks index update kawa
        }
    }

    cout << "Topper: " << names[maxIndex] 
         << " (Marks: " << marks[maxIndex] << ")" << endl;
}

// da pass/fail show kolo function
void showResult(string names[], int marks[], int size) {
    cout << "\nPass/Fail Status:\n";

    for (int i = 0; i < size; i++) {
        if (marks[i] >= 50)
            cout << names[i] << " - Pass\n"; // ka 50 ya zyada we pass
        else
            cout << names[i] << " - Fail\n"; // ka kam we fail
    }
}

// da student search kolo function
void searchStudent(string names[], int marks[], int size) {
    string searchName;
    cout << "\nEnter name to search: ";
    cin >> searchName; // da user na name akhistal

    for (int i = 0; i < size; i++) {
        if (names[i] == searchName) {
            cout << "Found: " << names[i] 
                 << " (Marks: " << marks[i] << ")" << endl;
            return; // ka milao shoo ?? function khatam kawa
        }
    }

    cout << "Student not found!" << endl; // ka na milao shoo
}

int main() {
    int n;

    // da students number akhistal
    cout << "Enter number of students: ";
    cin >> n;

    string names[n];
    int marks[n];

    // da data input section
    for (int i = 0; i < n; i++) {
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin >> names[i]; // name store kigi

        cout << "Enter marks: ";
        cin >> marks[i]; // marks store kigi
    }

    // da functions call kawa
    findTopper(names, marks, n);
    showResult(names, marks, n);
    searchStudent(names, marks, n);

    return 0; // program khatam sho
}