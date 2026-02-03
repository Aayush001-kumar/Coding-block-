#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1;
    cin >> num1;

    int sum = 0;
    int originalNum = num1;
    int temp = num1;
    int count = 0;

    while (temp > 0) {
        count++;
        temp /= 10;
    }

    temp = num1;

    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if (sum == originalNum) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
