#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[5];
    string temp;

    // 1. da 5 names input akhistal
    cout << "Enter 5 names (no spaces): ";
    for(int i=0; i<5; i++) {
        cin >> names[i]; // names array ke store kigi
    }

    // 2. da sorting process (simple tareeqa)
    for(int i=0; i<5; i++) {
        for(int j=i+1; j<5; j++) {
            if(names[i] > names[j]) { // ka lomri naam loya we ?? swap kawa
                temp = names[i]; // temporary variable ke store
                names[i] = names[j]; // chota naam front ta rawala
                names[j] = temp; // loya naam shata warka
            }
        }
    }

    // 3. sorted names display kawa
    cout << "Sorted Names: ";
    for(int i=0; i<5; i++) {
        cout << names[i] << " "; // har naam print kawa
    }

    return 0; // program khatam sho
}