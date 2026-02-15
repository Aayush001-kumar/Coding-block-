#include <bits/stdc++.h>
using namespace std;

void printPairs(vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());

    int l = 0, r = arr.size() - 1;

    while(l < r) {
        int sum = arr[l] + arr[r];

        if(sum == target) {
            cout << arr[l] << " and " << arr[r] << endl;
            l++;
            r--;
        }
        else if(sum < target) {
            l++;
        }
        else {
            r--;
        }
    }
}

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    printPairs(arr, target);

    return 0;
}
