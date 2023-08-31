#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,1,3,2,3,1,5,6,8,3,1,3,1,1,2};
    int n=sizeof(arr)/sizeof(int);
    int cnt1=0,el1,el2,cnt2=0;
    el1=arr[1];
    cnt1=1;
    for(int i=0;i<n;i++){
        if(cnt1==0 || cnt2==0){
            if(cnt1==0){
                cnt1=1;
                el1=arr[i];
            }
            else if(cnt2==0){
                cnt2=1;
                el2=arr[i];                
            }
        }  
        if(arr[i]==el1 || arr[i]==el2){
            if(arr[i]==el1){
                cnt1++;
            }
            else{
                cnt2++;
            }
        }
        else{
            cnt1--;
            cnt2--;
        }
        
    }
    int maxcount1=0,maxcount2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==el1){maxcount1++;}
        if(arr[i]==el2){maxcount2++;}
    }
    if(maxcount1 > n/3) cout<<"element is1 : "<<el1<<endl;
    if(maxcount2 > n/3) cout<<"element is2 : "<<el2<<endl;
    else cout<<"there is no element that occurs more than n/2 times"<<endl;
}