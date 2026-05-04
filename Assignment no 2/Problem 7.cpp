#include <iostream>
using namespace std;

// Function 1: da total energy calculate kolo para
float calculateTotal(float data[], int hours) {
    float total = 0;
    for (int i = 0; i < hours; i++) {
        total = total + data[i]; // har hour energy jamawa
    }
    return total; // total wapas warka
}

// Function 2: da maximum generation hour maloomawal
int findMaxHour(float data[], int hours) {
    float maxPower = data[0];
    int maxHour = 0; // 0 matlab awal hour (index 0)

    for (int i = 1; i < hours; i++) {
        if (data[i] > maxPower) {
            maxPower = data[i]; // max update kawa
            maxHour = i; // hour index update kawa
        }
    }
    return maxHour; // index wapas warka
}

// Function 3: da average calculate kolo para
float calculateAverage(float total, int hours) {
    return total / hours; // average nikalawa
}

int main() {
    float energy[24]; // da 24 ghanto data
    float total, avg;
    int bestHour;

    cout << "--- Solar Power Plant Data Entry ---" << endl;
    
    // 1. da user na data akhistal
    for (int i = 0; i < 24; i++) {
        cout << "Hour " << i + 1 << " energy (kWh): ";
        cin >> energy[i]; // har hour energy store kigi
    }

    // 2. da functions call kawa
    total = calculateTotal(energy, 24);
    bestHour = findMaxHour(energy, 24);
    avg = calculateAverage(total, 24);

    // 3. results print kawa
    cout << "\n========== Daily Report ==========" << endl;
    cout << "Total Energy Generated : " << total << " kWh" << endl;
    cout << "Average Generation     : " << avg    << " kWh" << endl;
    
    // index ke +1 kawe, zaka 0 matlab 1st hour de
    cout << "Peak Generation Time   : Hour " << bestHour + 1 
         << " (" << energy[bestHour] << " kWh)" << endl;
    cout << "==================================" << endl;

    return 0; // program khatam sho
}