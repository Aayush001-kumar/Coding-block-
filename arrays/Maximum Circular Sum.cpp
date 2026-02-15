#include <bits/stdc++.h>
using namespace std;

int kadaneMax(vector<int> &arr) {
    int curr = arr[0], best = arr[0];
    for(int i = 1; i < arr.size(); i++) {
        curr = max(arr[i], curr + arr[i]);
        best = max(best, curr);
    }
    return best;
}

int kadaneMin(vector<int> &arr) {
    int curr = arr[0], best = arr[0];
    for(int i = 1; i < arr.size(); i++) {
        curr = min(arr[i], curr + arr[i]);
        best = min(best, curr);
    }
    return best;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        int totalSum = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            totalSum += arr[i];
        }

        int normalMax = kadaneMax(arr);
        int minSub = kadaneMin(arr);

        if(normalMax < 0) {
            cout << normalMax << "\n";
        } else {
            cout << max(normalMax, totalSum - minSub) << "\n";
        }
    }

    return 0;
}
