#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 1) {
        cout << "0";
        return 0;
    }

    int original = n;
    int sumNum = 0;
    int temp = n;
    while (temp > 0) {
        sumNum += temp % 10;
        temp /= 10;
    }

    int sumFactors = 0;
    temp = n;
    int factorCount = 0;

    for (int i = 2; i * i <= temp; i++) {
        while (temp % i == 0) {
            factorCount++;
            int x = i;
            while (x > 0) {
                sumFactors += x % 10;
                x /= 10;
            }
            temp /= i;
        }
    }

    if (temp > 1) {
        factorCount++;
        int x = temp;
        while (x > 0) {
            sumFactors += x % 10;
            x /= 10;
        }
    }

    if (factorCount == 0) {
        cout << "0";
        return 0;
    }

    if (sumNum == sumFactors)
        cout << "1";
    else
        cout << "0";

    return 0;
}
