#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result(n);

    int l = 0, r = n - 1;
    int pos = n - 1;

    while(l <= r) {
        int leftSq = nums[l] * nums[l];
        int rightSq = nums[r] * nums[r];

        if(leftSq > rightSq) {
            result[pos] = leftSq;
            l++;
        } else {
            result[pos] = rightSq;
            r--;
        }
        pos--;
    }

    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
