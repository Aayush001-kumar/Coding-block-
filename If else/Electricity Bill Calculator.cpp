#include <bits/stdc++.h>
using namespace std;

int main() {
    int units,bill = 0;
    cin>> units;

    if (units <= 100) {
        bill = units*2;
    }
    else if (units <= 200) {
        bill =units*3;
    }
    else {
        bill =units*5;
    }
    cout<< bill;
}
