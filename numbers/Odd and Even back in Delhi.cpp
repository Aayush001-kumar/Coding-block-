#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        long long car;
        cin >> car;

        int evenSum = 0, oddSum = 0;

        if (car == 0) {
            evenSum = 0;
        }

        while (car > 0) {
            int digit = car % 10;

            if (digit % 2 == 0)
                evenSum += digit;
            else
                oddSum += digit;

            car /= 10;
        }

        if (evenSum % 4 == 0 || oddSum % 3 == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
