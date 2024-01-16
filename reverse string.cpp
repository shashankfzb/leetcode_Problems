#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int b=sizeof(arr)/sizeof(int);
    int i=0;
    while(b>0 && i<=b){
        b--;
        int temp=arr[i];
        arr[i]=arr[b];
        arr[b]=temp;
        i++;
    }
    int j=0;
    while(j < (sizeof(arr)/sizeof(int))){
        cout<<arr[j]<<endl;
        j++;
    }
}