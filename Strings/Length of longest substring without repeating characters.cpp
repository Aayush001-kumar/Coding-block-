#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    unordered_map<char, int> lastIndex;
    int maxLength = 0, start = 0;

    for (int end = 0; end < str.size(); end++)
    {
        char c = str[end];
        if (lastIndex.find(c) != lastIndex.end() && lastIndex[c] >= start)
        {
            start = lastIndex[c] + 1;
        }
        lastIndex[c] = end;
        maxLength = max(maxLength, end - start + 1);
    }

    cout << maxLength << endl;
    return 0;
}