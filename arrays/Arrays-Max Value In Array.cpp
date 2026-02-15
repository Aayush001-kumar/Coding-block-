#include <bits/stdc++.h>
using namespace std;

long long findMax(vector<long long> &arr) {
    long long maxi = arr[0];
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] > maxi) {
            maxi = arr[i];
        }
    }
    return maxi;
}

int main() {
    int N;
    cin >> N;

    vector<long long> arr(N);
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << findMax(arr);

    return 0;
}
