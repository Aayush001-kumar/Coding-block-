/*
In a busy hospital emergency room, patients are triaged based on their severity levels to prioritize treatment. Each patient is assigned a severity code:
● 0: Non-urgent cases
● 1: Moderately urgent cases
● 2: Critical cases

The hospital's system must efficiently sort these severity levels to ensure that critical cases are attended to first, followed by moderately urgent, and finally, non-urgent cases. You are tasked with writing a function that takes a list of integers representing patient severity levels and sorts it in ascending order. The goal is to ensure patients are categorized by their severity efficiently.


Input Format
The first line contains N, which is the size of the array. The following N lines contain either 0, or 1, or 2.


Constraints
1 <= N <= 10^6
Each input element x, such that x ∈ { 0, 1, 2 }.


Output Format
Output the sorted array with each element separated by a newline.


Sample Input
5
0
1
2
1
2
Sample Output
0
1
1
2
2
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    long long c0 = 0, c1 = 0, c2 = 0;

    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        if(x == 0) c0++;
        else if(x == 1) c1++;
        else c2++;
    }

    while(c0--) cout << 0 << "\n";
    while(c1--) cout << 1 << "\n";
    while(c2--) cout << 2 << "\n";

    return 0;
}
