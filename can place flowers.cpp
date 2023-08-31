#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,0,0,0,0,1};
    bool n;
    int m=2;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        if(arr[i]==0 && (i==0 || arr[i-1]==0) && (i==(sizeof(arr)/sizeof(int))-1 || arr[i+1]==0)){
            arr[i]=1;
            m--;
        }
        if(m<=0){
            n=true;
            break;
        }
        else{
            n=false;
        }
    }
    cout<<n<<endl;
}