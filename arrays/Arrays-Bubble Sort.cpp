#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<long long> &arr) {
    int n = arr.size();
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int N;
    cin >> N;

    vector<long long> arr(N);
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr);

    for(int i = 0; i < N; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
