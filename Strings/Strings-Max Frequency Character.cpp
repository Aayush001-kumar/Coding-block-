#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>> str;
    map<char,int> freq;
    for(auto c:str){
        freq[c]++;
    }
    char maxChar;
    int maxFreq = 0;
    for(auto p:freq){
        if(p.second > maxFreq){
            maxFreq = p.second;
            maxChar = p.first;
        }
    }
    cout << maxChar;

}