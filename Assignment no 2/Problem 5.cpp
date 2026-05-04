#include <iostream>
using namespace std;

int main() {
    float loads[24];
    float total = 0, peak;

    // --- da input section ---
    cout << "==========================================" << endl;
    cout << "   Power System Load Analysis (24 Hours)  " << endl;
    cout << "==========================================" << endl;
    cout << "Please enter the load demand for each hour (in MW):" << endl;

    for (int i = 0; i < 24; i++) {
        cout << "Hour " << i + 1 << ": ";
        cin >> loads[i]; // da har hour load input akhistal
    }

    // --- da calculation section ---
    peak = loads[0]; // awal value peak assume shwa
    for (int i = 0; i < 24; i++) {
        total = total + loads[i]; // tol load jamawa
        
        if (loads[i] > peak) {    // ka value loya we
            peak = loads[i]; // peak update kawa
        }
    }

    // --- da output section ---
    cout << "\n==========================================" << endl;
    cout << "            Analysis Report               " << endl;
    cout << "==========================================" << endl;
    cout << "Total Energy Consumption : " << total << " MW" << endl; // total show kawa
    cout << "Maximum Peak Demand     : " << peak  << " MW" << endl; // peak show kawa
    cout << "==========================================" << endl;

    return 0; // program khatam sho
}