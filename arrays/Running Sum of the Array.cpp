#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    long long runningSum = 0;
    for(int i = 0; i < n; i++) {
        runningSum += nums[i];
        cout << runningSum << " ";
    }

    return 0;
}
