#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for(int i = 0; i < N; i++)
        cin >> arr[i];

    int candidate = 0;
    int count = 0;

    for(int i = 0; i < N; i++) {
        if(count == 0) {
            candidate = arr[i];
        }

        if(arr[i] == candidate)
            count++;
        else
            count--;
    }

    cout << candidate;

    return 0;
}
