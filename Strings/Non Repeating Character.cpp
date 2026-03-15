#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        map<char, int> freq;
        for (auto c : str)
        {
            freq[c]++;
        }
        bool found = false;
        for (auto c : str)
        {
            if (freq[c] == 1)
            {
                cout << c << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << -1 << endl;
    }
}