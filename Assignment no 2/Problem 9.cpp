#include <iostream>
using namespace std;

// Total Rows (Regions) aur Columns (Days) ko define kiya
const int REGIONS = 4;
const int DAYS = 7;
// Function 1: da har region total consumption (MW) calculate kawal
void calculateRegionTotals(float grid[REGIONS][DAYS]) {
    cout << "\n--- Consumption per Region (Total MW) ---" << endl;
    
    for (int r = 0; r < REGIONS; r++) {
        float regionTotal = 0;
        // da har region 7 days data sum kawal
        for (int d = 0; d < DAYS; d++) {
            regionTotal = regionTotal + grid[r][d];
        }
        cout << "Region " << r + 1 << " Total: " << regionTotal << " MW" << endl;
    }
}

// Function 2:da har din total demand calculate kawal aw zyat wali day find kawal
void findMaxDemandDay(float grid[REGIONS][DAYS]) {
    float dayTotals[7] = {0}; // har day total store kawal
 // pehle har day sum kawal (column wise)
    for (int d = 0; d < DAYS; d++) {
        for (int r = 0; r < REGIONS; r++) {
            dayTotals[d] = dayTotals[d] + grid[r][d];
        }
    }
  // now max demand wala day find kawal
    float maxTotal = dayTotals[0];
    int maxDayIndex = 0; // pehle day ko max maanawo

    for (int i = 1; i < DAYS; i++) {
        if (dayTotals[i] > maxTotal) {
            maxTotal = dayTotals[i];
            maxDayIndex = i;
        }
    }
    cout << "\n--- Peak Demand Day ---" << endl;
    cout << "Highest demand was on Day " << maxDayIndex + 1 
         << " (Total: " << maxTotal << " MW)" << endl;
}

// Function 3: Overall Average nikalne ke liye
// da complete grid average consumption calculate kawal
float calculateOverallAverage(float grid[REGIONS][DAYS]) {
    float grandTotal = 0;
    int totalCells = REGIONS * DAYS; // total 28 values

    // sab values jor kawal
    for (int r = 0; r < REGIONS; r++) {
        for (int d = 0; d < DAYS; d++) {
            grandTotal = grandTotal + grid[r][d];
        }
    }

    return grandTotal / totalCells;
}

int main() {
    float grid[REGIONS][DAYS];

    cout << "--- Smart Grid Data Entry ---" << endl;
    cout << "Enter consumption for 4 Regions over 7 Days (in MW):" << endl;

    // user se input lena
    for (int r = 0; r < REGIONS; r++) {
        cout << "\n-- Region " << r + 1 << " --" << endl;
        for (int d = 0; d < DAYS; d++) {
            cout << "Day " << d + 1 << ": ";
            cin >> grid[r][d];
        }
    }

    // functions call kawal
    calculateRegionTotals(grid);
    findMaxDemandDay(grid);
    
    float avg = calculateOverallAverage(grid);

    // final result show kawal
    cout << "\n--- Overall Stats ---" << endl;
    cout << "Average Consumption: " << avg << " MW" << endl;

    return 0;
}