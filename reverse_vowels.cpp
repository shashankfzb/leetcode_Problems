#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="leetcode";
    vector<char> vowels;
    vector<char> vow;
    for(int i=0;i<str.length();i++){
        if(str[i]=='a' || str[i]=='A' ||str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='U' || str[i]=='u'){
            vowels.push_back(str[i]);
        }
    }
    int j=vowels.size();
    reverse(vowels.begin(),vowels.end());
    int p=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='a' || str[i]=='A' ||str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='U' || str[i]=='u'){
            str[i]=vowels[p];
            p++;
            cout<<3;
        }
    }
    cout<<"string:-"<<str;
    
}