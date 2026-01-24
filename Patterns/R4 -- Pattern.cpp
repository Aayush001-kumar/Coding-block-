#include<bits/stdc++.h>
using namespace std;
int main() {
	int rows;
	cin>> rows;
	int i=0;
	int j=0;
	while(i<rows){
		while(j<=i){
			cout<< "*";
			j++;
		}
		i++;
		j=0;
		cout<< endl;
	}
	return 0;
}