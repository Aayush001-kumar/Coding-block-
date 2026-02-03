#include<iostream>
using namespace std;
int main() {
	int num;
	int decimal=0,base=1;

	cin>> num;
	while(num>0){
		int digit=num%10;
		decimal+=digit*base;
		base*=2;
		num/=10;
	}
	cout<<decimal;
	return 0;
}