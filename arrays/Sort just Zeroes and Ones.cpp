#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long N;
    cin >> N;

    long long count0 = 0, count1 = 0;

    for(long long i = 0; i < N; i++) {
        int x;
        cin >> x;
        if(x == 0) count0++;
        else count1++;
    }

    for(long long i = 0; i < count0; i++) cout << "0 ";
    for(long long i = 0; i < count1; i++) cout << "1 ";

    return 0;
}
