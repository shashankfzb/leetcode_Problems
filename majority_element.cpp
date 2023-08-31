#include<iostream>
using namespace std;

int main(){
    int arr[]={6,5,5};
    int cnt=0,element;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            element=arr[i];
        }
        else if(arr[i]==element){
            cnt++;
        }
        else{cnt--;}
    }
    int maxcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==element){maxcount++;}
    }
    if(maxcount > n/2){cout<<"element is : "<<element<<endl;}
    else return -1;
}