#include<bits/stdc++.h>
using namespace std;
int main() {
	int rows;
	int first=0;
	int second=1;
	int next;
	cin>> rows;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=i;j++){
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;			
		}
		cout<< endl;
	}
	return 0;
}