#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    char compare = str[0];
    int count=1;
    for(int i=1; i<str.size(); i++){
        if(str[i] == compare){
            count++;
        }
        else{
            cout << compare << count;
            compare = str[i];
            count=1;
        }
    }
    cout << compare << count;
}