#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while(T--) {
        int N;
        cin >> N;

        vector<int> price(N);
        for(int i = 0; i < N; i++) cin >> price[i];

        int M;
        cin >> M;

        sort(price.begin(), price.end());

        int l = 0, r = N - 1;
        int best_i = 0, best_j = 0;
        int minDiff = INT_MAX;

        while(l < r) {
            int sum = price[l] + price[r];
            if(sum == M) {
                if(price[r] - price[l] < minDiff) {
                    minDiff = price[r] - price[l];
                    best_i = price[l];
                    best_j = price[r];
                }
                l++;
                r--;
            }
            else if(sum < M) {
                l++;
            } else {
                r--;
            }
        }

        cout << "Deepak should buy roses whose prices are "
             << best_i << " and " << best_j << "." << "\n";

        if(T) cout << "\n";
    }

    return 0;
}
