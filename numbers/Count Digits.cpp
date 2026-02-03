#include<iostream>
using namespace std;
int main() {
	int num,digit;
	cin>>num>>digit;
	
	int count=0;

	while (num>0){
		if(num%10==digit){
			count++;
		}
		num/=10;
	}
	cout<< count;
}