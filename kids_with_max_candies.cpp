#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,3,5,1,3};
    int extra=3;
    vector<int> result;
    int max=0;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        if(arr[i]+extra >= max){
            result.push_back(1);
        }
        else{
            result.push_back(0);
        }
    }
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        cout<<result[i]<<endl;
    }
}
