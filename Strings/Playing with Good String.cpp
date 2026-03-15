#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>> str;
    int count=0;
    int maxlength=0;
    for(int i=0;i<str.size();i++){
        if(str[i]== 'a' || str[i]== 'e' || str[i]== 'i' || str[i]== 'o' || str[i]== 'u'){
            count++;
            if(count>maxlength){
                maxlength=count;
            }
        }
        else{
            count=0;
        }
    }
    cout<< maxlength;
}