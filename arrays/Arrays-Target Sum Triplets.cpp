#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < N - 2; i++) {
        int left = i + 1;
        int right = N - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == target) {
                cout << arr[i] << ", " << arr[left] << " and " << arr[right] << endl;
                left++;
                right--;
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
    }

    return 0;
}
