#include <iostream>
#include <string>
using namespace std;

int countPalindromes(const string &S) {
    int n = S.length();
    int count = 0;

    for (int center = 0; center < n; center++) {
        int left = center, right = center;
        while (left >= 0 && right < n && S[left] == S[right]) {
            count++;
            left--;
            right++;
        }

        left = center;
        right = center + 1;
        while (left >= 0 && right < n && S[left] == S[right]) {
            count++;
            left--;
            right++;
        }
    }

    return count;
}

int main() {
    string S;
    cin >> S;
    cout << countPalindromes(S) << endl;
    return 0;
}