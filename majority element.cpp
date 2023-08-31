#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={7,5,5,8,5,7,5,5,7,5,5,1,2,3,4,5,5};
    int n=sizeof(arr)/sizeof(int);
    int cnt=0,element;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            element=arr[i];
        }    
        if(arr[i]==element){
            cnt++;
        }
        else{
            cnt--;
        }

    }
    int maxcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==element){maxcount++;}
    }
    if(maxcount > n/2) cout<<"element is : "<<element<<endl;
    else cout<<"there is no element that occurs more than n/2 times"<<endl;
}