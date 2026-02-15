#include <iostream>
#include <vector>
using namespace std;

void invertArray(vector<int>& arr, vector<int>& inv, int i, int n) {

    if (i == n) {
        return;
    }
    inv[arr[i]] = i;
    invertArray(arr, inv, i + 1, n);
}

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    vector<int> inv(N);

    invertArray(arr, inv, 0, N);

    for (int i = 0; i < N; i++) {
        cout << inv[i] << " ";
    }

    return 0;
}
