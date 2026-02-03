#include<bits/stdc++.h>
using namespace std;
int main() {
	int num1,num2;
	cin>> num1>>num2;
	
	for (int num = num1; num <= num2; num++){

		int sum =0;
		int originalNum=num;
		int temp=num;
		int count=0;
		while (temp>0){
			count++;
			temp/=10;
		}
		temp=num;
		while(temp>0){
			int digit=temp%10;
			sum+=pow(digit,count);
			temp/=10;
		}
		if(sum==originalNum){
		cout<< sum<< endl;
		}
	}
	

	return 0;
}