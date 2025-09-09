#include <iostream>
using namespace std;

int main() {
    double num;
    int positiveCount = 0;


    for (int i = 0; i < 6; i++) {
        cin >> num;
        if (num > 0.0)
            positiveCount++;
    }


    cout << positiveCount << " valores positivos" << endl;

    return 0;
}
