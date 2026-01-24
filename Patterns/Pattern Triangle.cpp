#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows;
	cin>> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << "  ";
        }
        for (int k = i; k < 2 * i; k++) {
            cout << k << " ";
        }
        for (int l = 2 * i - 2; l >= i; l--) {
            cout << l << " ";
        }

        cout << endl;
    }

    return 0;
}