#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int mid = (n + 1) / 2;

    for(int i = 1; i <= mid; i++){
        for(int j = 1; j <= mid - i; j++)
            cout << "  ";
        for(int k = 1; k <= 2*i - 1; k++){
            cout << "*";
            if(k != 2*i - 1) cout << " ";
        }
        cout << endl;
    }

    for(int i = mid-1; i >= 1; i--){
        for(int j = 1; j <= mid - i; j++)
            cout << "  ";
        for(int k = 1; k <= 2*i - 1; k++){
            cout << "*";
            if(k != 2*i - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
