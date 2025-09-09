#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;

    string months[] = {"January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December"};

    cout << months[m - 1] << endl;

    return 0;
}
