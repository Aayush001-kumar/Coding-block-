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

        vector<long long> height(N);
        for(int i = 0; i < N; i++)
            cin >> height[i];

        int left = 0, right = N - 1;
        long long leftMax = 0, rightMax = 0;
        long long water = 0;

        while(left <= right) {
            if(height[left] <= height[right]) {
                if(height[left] >= leftMax)
                    leftMax = height[left];
                else
                    water += leftMax - height[left];
                left++;
            }
            else {
                if(height[right] >= rightMax)
                    rightMax = height[right];
                else
                    water += rightMax - height[right];
                right--;
            }
        }

        cout << water << "\n";
    }

    return 0;
}
