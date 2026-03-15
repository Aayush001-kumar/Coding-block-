#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string ans = "";
    int count = 1;
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] == str[i - 1])
        {
            count++;
        }
        else
        {
            ans += str[i - 1];
            if (count > 1)
            {
                ans += to_string(count);
            }
            count = 1;
        }
    }
    ans += str[str.length() - 1];
    if (count > 1)
    {
        ans += to_string(count);
    }
	cout << ans;
}