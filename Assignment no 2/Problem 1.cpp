#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int max, min, sum = 0; // sum da total, max aw min da comparison para

    cout << "Enter 10 integer values:\n"; // user na 10 values ghwara
    for (int i = 0; i < 10; i++) {
        cin >> arr[i]; // values array ke store kigi
    }
	max = min = arr[0]; // awal value max aw min assume shwa
	for (int i = 0; i < 10; i++) {
	if (arr[i] > max) // ka value loya we
            max = arr[i]; // max update kawa

        if (arr[i] < min) // ka value kma we
            min = arr[i]; // min update kawa

        sum += arr[i]; // tol values jamawa
    }

    float average = sum / 10.0; // average calculate kawa

    cout << "Maximum value: " << max << endl; // max show kawa
    cout << "Minimum value: " << min << endl; // min show kawa
    cout << "Average: " << average << endl; // average show kawa

    return 0; // program khatam sho
}