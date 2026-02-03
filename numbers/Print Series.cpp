#include<iostream>
using namespace std;
int main() {
	int n1,n2;
	cin>>n1>>n2;
    int count = 0;
    int n = 1;

    while (count < n1) {
        int term = 3 * n + 2;
        if (term % n2 != 0) {
            cout << term << endl;
            count++;
        }
        n++;
    }
}