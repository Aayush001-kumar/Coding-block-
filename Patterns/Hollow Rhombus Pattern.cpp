#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << string(N - i, ' ');
        if (i == 1 || i == N) {
            cout << string(N, '*');
        } else {
            cout << "*" << string(N - 2, ' ') << "*";
        }
        cout << endl;
    }
    return 0;
}