#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>> str;
    for(int i=0;i<str.size();i++){
        if(isupper(str[i]) and i!=0){
            cout<< endl;
        }
        cout<< str[i];
    }
}