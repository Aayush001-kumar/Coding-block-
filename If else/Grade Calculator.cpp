#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cin >> marks;
    if (marks >=90 and marks <= 100)
    {
        cout << "A";
    }
    else if (marks >= 75 and marks < 90)
    {
        cout << "B";
    }
    else if (marks >= 60 and marks <75)
    {
        cout << "C";
    }
    else
    {
        cout << "Fail";
    }
}