#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int s = 1; s <= N - i; s++) {
			cout << "  ";
		}
        int val = i;
        for (int j = 1; j <= i; j++) {
			cout << val++ << " ";
		}
        val -= 2;
        for (int j = 1; j < i; j++) {
			cout << val-- << " ";
		}
        cout << endl;
    }

    for (int i = N - 1; i >= 1; i--) {
        for (int s = 1; s <= N - i; s++) {
			cout << "  ";
		}
        int val = i;
        for (int j = 1; j <= i; j++) {
			cout << val++ << " ";
		}
        val -= 2;
        for (int j = 1; j < i; j++) {
			cout << val-- << " ";}
			
        cout << endl;
    }

    return 0;
}
