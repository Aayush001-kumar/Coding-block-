#include<iostream>
using namespace std;
int main() {
	int num;
	cin>> num;
	int first=0,second=1;
	int next;
	if (num == 1) {
        cout << first;
    } else if (num == 2) {
        cout << second;
    } else {
	for(int i=0;i<num-1;i++){
		next=first+second;
		first=second;
		second=next;
	}
	cout<< next;
	}

}