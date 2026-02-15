#include <bits/stdc++.h>
using namespace std;

int findIndex(vector<long long> &arr, long long M) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == M) {
            return i;
        }
    }
    return -1;
}

int main() {
    int N;
    cin >> N;

    vector<long long> arr(N);

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    long long M;
    cin >> M;

    cout << findIndex(arr, M);

    return 0;
}
