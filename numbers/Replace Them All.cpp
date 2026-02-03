#include<iostream>
using namespace std;
int main() {
	string num;
	cin>> num;
	for(int i=0;i<num.size();i++){
		if(num[i]=='0'){
			num[i]='5';
		}
	}
	cout<< num;
	return 0;
}