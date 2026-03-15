#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>> str;
    string ans="";
    for(auto c:str){
        if(islower(c)){
            ans+= toupper(c);
        }
        else{
            ans+= tolower(c);
        }
    }
    cout<< ans;

}