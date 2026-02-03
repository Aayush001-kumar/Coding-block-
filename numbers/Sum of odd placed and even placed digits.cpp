#include<bits/stdc++.h>
using namespace std;
int main() {
	int num;
	cin>> num;

	int oddsum=0,evensum=0;
	int position=1;
	while (num>0){
		int digit=num%10;

		if(position%2==1){
			oddsum+=digit;
		}
		else{
			evensum+=digit;
		}
		num/=10;
		position++;
	}
	cout<< oddsum <<endl<< evensum;
}