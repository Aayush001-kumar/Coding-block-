#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int mid = N / 2;

    for (int i = 0; i < N; i++) {
        int level = mid - abs(mid - i);
        for (int s = 0; s < 4 * abs(mid - i); s++) {
            cout << " ";
        }
        for (int num = level + 1; num >= 1; num--) {
            cout << num;
            if (num > 1) cout << " ";
        }
        if (level > 0) {
            for (int s = 0; s < 2 * level + 1; s++) {
                cout << " ";
            }
            for (int num = 1; num <= level + 1; num++) {
                cout << num;
                if (num < level + 1) cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}