#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i <= 2 * N; i++) {
        int row = (i <= N) ? i : 2 * N - i;

        for (int j = 0; j <= row; j++) {
            cout << N - j << " ";
        }
        if (row != N) {
            for (int s = 0; s < 2 * (N - row) - 1; s++) {
                cout << "  ";
            }
        }

        int start = (row == N) ? 1 : 0;
        for (int j = start; j <= row; j++) {
            cout << (N - row + j) << " ";
        }
        cout << endl;
    }

    return 0;
}
