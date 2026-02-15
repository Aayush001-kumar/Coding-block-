#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<long long> &arr) {
    int n = arr.size();

    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int N;
    cin >> N;

    vector<long long> arr(N);
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    selectionSort(arr);

    for(int i = 0; i < N; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
