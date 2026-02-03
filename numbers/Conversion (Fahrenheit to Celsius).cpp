#include <iostream>
using namespace std;

int main() {
    int minF, maxF, steps;
    cin >> minF >> maxF >> steps;

    for (int i = minF; i <= maxF; i += steps) {
        int C = (5 * (i - 32)) / 9;
        cout << i << " " << C << endl;
    }

    return 0;
}
