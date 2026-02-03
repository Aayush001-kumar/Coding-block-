#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;

    int inverse = 0;
    int position = 1;

    while (num > 0) {
        int digit = num % 10;

        inverse += position * static_cast<int>(pow(10, digit - 1));

        num /= 10;
        position++;
    }

    cout << inverse;
    return 0;
}
