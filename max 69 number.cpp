#include<iostream>
#include<vector>
#include<bits/stdc++.h>
//#include<math.h>
using namespace std;
int main(){
    int n=9669;
    int m=n;
    vector<int> digit;
    while(m){
        int digi=m%10;
        digit.push_back(digi);
        m/=10;
    }
    for(int i=digit.size()-1;i>=0;i--){
        if(digit[i]==6){
            digit[i]=9;
            break;
        }
    }
    int ans=0;
    for(int i=digit.size()-1;i>=0;i--){
        ans+=digit[i]*pow(10,i);
    }
    cout<<ans;
}