#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.size() - 1; i++)
    {
        cout << str[i] << (int)(str[i + 1] - str[i]);
    }
    cout << str[str.size() - 1];
}