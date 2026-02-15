#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> arr(N), output(N);

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Prefix products
    long long prefix = 1;
    for(int i = 0; i < N; i++) {
        output[i] = prefix;
        prefix *= arr[i];
    }

    long long suffix = 1;
    for(int i = N - 1; i >= 0; i--) {
        output[i] *= suffix;
        suffix *= arr[i];
    }

    for(int i = 0; i < N; i++) {
        cout << output[i] << " ";
    }

    return 0;
}
