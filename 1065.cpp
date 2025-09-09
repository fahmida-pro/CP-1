#include <iostream>
using namespace std;

int main() {
    int num, evenC = 0;

    for (int i = 0; i < 5; i++) {
        cin >> num;
        if (num % 2 == 0) evenC++;
    }

    cout << evenC << " valores pares" << endl;

    return 0;
}
