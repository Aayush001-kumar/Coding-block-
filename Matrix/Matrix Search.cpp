#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>> n>> m;
	vector<vector<int>> matrix(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>> matrix[i][j];
		}
	}
	int traget;
	cin >> traget;
	bool found=false;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(traget==matrix[i][j]){
				cout<<"1";
				found =true;
			}
			
		}
	}	
	if(!found){
		cout<< "0";
	}
}