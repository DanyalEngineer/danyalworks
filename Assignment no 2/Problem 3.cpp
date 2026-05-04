#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3], matrix2[3][3], sum[3][3];

    // --- da lomri matrix input ---
    cout << "Enter elements for first 3x3 Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j]; // value matrix1 ke store kigi
        }
    }
	// --- da doem matrix input ---
    cout << "\nEnter elements for second 3x3 Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j]; // value matrix2 ke store kigi
        }
    }
	// --- da matrices addition ---
    // har row aw column ke muwafiq values jamawi
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j]; // jamawa
        }
    }
	// --- result display ---
    cout << "\nSum of the two matrices is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << sum[i][j] << " "; // result print kawa
        }
        cout << endl; // new line da har row na baad
    }

    return 0; // program khatam sho
}