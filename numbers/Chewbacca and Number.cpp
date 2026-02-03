#include <iostream>
using namespace std;

int main() {
    long long x;
    cin >> x;

    long long result = 0;
    long long place = 1;

    while (x > 0) {
        int digit = x % 10;

        if (x >= 10) {
            if (digit >= 5) {
                digit = 9 - digit;
            }
        } else {
            if (digit >= 5 && digit != 9) {
                digit = 9 - digit;
            }
        }

        result += digit * place;
        place *= 10;
        x /= 10;
    }

    cout << result;
    return 0;
}
