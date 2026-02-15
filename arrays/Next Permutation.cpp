#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++)
        cin >> nums[i];

    int i = n - 2;

    while(i >= 0 && nums[i] >= nums[i + 1])
        i--;

    if(i >= 0) {

        int j = n - 1;
        while(nums[j] <= nums[i])
            j--;

        swap(nums[i], nums[j]);
    }

    reverse(nums.begin() + i + 1, nums.end());

    for(int num : nums)
        cout << num << " ";

    return 0;
}
