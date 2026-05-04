#include <iostream>
using namespace std;

// Function 1: da safe/unsafe readings shumar kolo para
void checkSafety(float readings[], int size) {
    int below = 0;
    int above = 0;

    for (int i = 0; i < size; i++) {
        if (readings[i] < 3.0) {
            below++; // da safe limit na kam readings
        } else if (readings[i] > 4.2) {
            above++; // da safe limit na zyada readings
        }
    }

    cout << "--- Safety Report ---" << endl;
    cout << "Readings BELOW safe limit (< 3.0V): " << below << endl;
    cout << "Readings ABOVE safe limit (> 4.2V): " << above << endl;

    // ka kom unsafe reading we ?? warning show kawa
    if (below > 0 || above > 0) {
        cout << "[WARNING] Unsafe battery condition detected!" << endl;
    } else {
        cout << "Status: All readings are SAFE." << endl;
    }
}

// Function 2: da maximum aw minimum voltage maloomawal
void findMinMax(float readings[], int size, float &minVal, float &maxVal) {
    // awal value max aw min assume shwa
    minVal = readings[0];
    maxVal = readings[0];

    for (int i = 1; i < size; i++) {
        if (readings[i] > maxVal) {
            maxVal = readings[i]; // max update kawa
        }
        if (readings[i] < minVal) {
            minVal = readings[i]; // min update kawa
        }
    }
}

int main() {
    float voltages[20]; // da 20 readings storage
    float minV, maxV;

    cout << "--- Battery Health Monitoring ---" << endl;
    cout << "Enter 20 voltage readings (in Volts):" << endl;

    // 1. da user na input akhistal
    for (int i = 0; i < 20; i++) {
        cout << "Reading " << i + 1 << ": ";
        cin >> voltages[i]; // har reading store kigi
    }

    // 2. da functions call kawa
    checkSafety(voltages, 20); // safety check kai
    
    findMinMax(voltages, 20, minV, maxV); // min aw max maloomawi

    // 3. da min/max result show kawa
    cout << "\nVoltage Stats:" << endl;
    cout << "Minimum Voltage: " << minV << " V" << endl;
    cout << "Maximum Voltage: " << maxV << " V" << endl;

    return 0; // program khatam sho
}