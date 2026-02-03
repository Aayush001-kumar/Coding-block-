#include <iostream>
using namespace std;

int main() {
    int sb, db, sn;
    cin >> sb >> db >> sn;

    int decimal = 0;
    int power = 1;
    int temp = sn;

    while (temp > 0) {
        int digit = temp % 10;
        decimal += digit * power;
        power *= sb;
        temp /= 10;
    }

    int result = 0;
    power = 1;

    while (decimal > 0) {
        int rem = decimal % db;
        result += rem * power;
        power *= 10;
        decimal /= db;
    }

    cout << result;
    return 0;
}
