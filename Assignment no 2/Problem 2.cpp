#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5; // da array size
	// da array seedha print kawa
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // har value print kawa
    }
    // da array ulta print kawa (loop baraks chalay)
    cout << "\nReverse: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " "; // ulta values print kawa
    }

    return 0; // program khatam sho
}