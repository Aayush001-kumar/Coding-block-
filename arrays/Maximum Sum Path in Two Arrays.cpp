#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n), b(m);

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int j = 0; j < m; j++) cin >> b[j];

        int i = 0, j = 0;
        long long sum1 = 0, sum2 = 0, result = 0;

        while(i < n && j < m) {
            if(a[i] < b[j]) {
                sum1 += a[i++];
            }
            else if(a[i] > b[j]) {
                sum2 += b[j++];
            }
            else {
                result += max(sum1, sum2) + a[i];
                sum1 = sum2 = 0;
                i++; j++;
            }
        }

        while(i < n) sum1 += a[i++];
        while(j < m) sum2 += b[j++];

        result += max(sum1, sum2);

        cout << result << "\n";
    }

    return 0;
}
