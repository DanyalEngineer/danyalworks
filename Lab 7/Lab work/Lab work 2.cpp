// Name: Danyal Hassan
// Department: Electrical Engineering (Power)
// Registration No: BFNWELE0750
// Section: A

#include <iostream>
using namespace std;

int main() {
    
    // declaring and initializing character array with a word
    char message[] = "HELLO";

    // displaying heading before printing characters
    cout << "Characters in the message are:" << endl;

    // loop is used to access each character until null character appears
    for(int i = 0; message[i] != '\0'; i++) {

        // printing one character of the string in each line
        cout << message[i] << endl;
    }

    return 0;
}