#include<bits/stdc++.h>
using namespace std;

int maxswap(string &str, int k, char target){
    int n=str.size();
    int left=0,right=0;
    int maxlength=0;
    int flip=0;
    while(right<n){
        if(str[right]==target){
            flip++;
        }
        while(flip>k){
            if(str[left]==target){
                flip--;
            }
            left++;
        }
        maxlength=max(maxlength,right-left+1);
        right++;
    }
    return maxlength;
}

int main(){
    int num;
    cin>> num;
    string str;
    cin>> str;
    int Aflip=maxswap(str,num,'a');
    int Bflip=maxswap(str,num,'b');

    cout<< max(Aflip,Bflip);
}