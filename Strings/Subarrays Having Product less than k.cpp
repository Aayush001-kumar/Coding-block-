#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;
    
    vector<long long> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long prod = 1;
    long long count = 0;
    int left = 0;

    for(int right = 0; right < n; right++) {
        prod *= arr[right];

        while(left <= right && prod >= k) {
            prod /= arr[left];
            left++;
        }

        count += (right - left + 1);
    }

    cout << count << endl;
    return 0;
}