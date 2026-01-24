#include<bits/stdc++.h>
using namespace std;
int main() {
	int rows;
	cin>> rows;
	for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
			if(j==1||j==i)
            cout<<i << " ";
			else
			cout<< "0" << " ";
        }
        cout<< endl;
    }
	return 0;
}