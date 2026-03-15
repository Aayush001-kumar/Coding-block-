#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
    return a+b > b+a;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        vector<string> str(n);
        for(int i=0;i<n;i++){
            cin>> str[i];
        }
        sort(str.begin(),str.end(),compare);
        string ans="";
        for(auto s:str){
            ans+=s;
        }
        cout<< ans<< endl;
    }
}