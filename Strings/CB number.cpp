#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int primes[10] = {2,3,5,7,11,13,17,19,23,29};
    bool used[20] = {false};
    int count = 0;

    for(int len = 1; len <= n; len++) {
        for(int i = 0; i <= n - len; i++) {

            int j = i + len - 1;
            long long num = stoll(s.substr(i, len));

            bool free = true;
            for(int k = i; k <= j; k++) {
                if(used[k]) {
                    free = false;
                    break;
                }
            }

            if(!free) continue;

            if(num == 0 || num == 1) continue;

            bool isCB = true;

            for(int p = 0; p < 10; p++) {
                if(num == primes[p]) {
                    isCB = true;
                    break;
                }
                if(num % primes[p] == 0) {
                    isCB = false;
                    break;
                }
            }

            if(isCB) {
                count++;
                for(int k = i; k <= j; k++) {
                    used[k] = true;
                }
            }
        }
    }

    cout << count;
}