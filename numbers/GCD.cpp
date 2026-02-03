#include<iostream>
using namespace std;
int main() {
	int num1,num2;
	cin>>num1>>num2;
	int a=num1;
	int b=num2;

	while(b!=0){
		int temp = b;
		b = a % b;
		a = temp;
	}
	cout<<a;
	return 0;
}