#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int longestKUniqueSubstring(const string &s, int k) {
    int n = s.length();
    int maxLength = -1;

    for (int i = 0; i < n; i++) {
        unordered_set<char> uniqueChars;
        for (int j = i; j < n; j++) {
            uniqueChars.insert(s[j]);
            if (uniqueChars.size() > k)
                break;
            if (uniqueChars.size() == k) {
                int len = j - i + 1;
                if (len > maxLength)
                    maxLength = len;
            }
        }
    }

    return maxLength;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        int k;
        cin >> s >> k;
        cout << longestKUniqueSubstring(s, k) << endl;
    }
    return 0;
}