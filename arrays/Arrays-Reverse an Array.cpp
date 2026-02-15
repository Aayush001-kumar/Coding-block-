#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<long long> &arr) {
    int i = 0, j = arr.size() - 1;
    while(i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main() {
    int N;
    cin >> N;

    vector<long long> arr(N);
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    reverseArray(arr);

    for(int i = 0; i < N; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
