#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[4]={1,2,3,4};
    vector<int> result;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        int ans=1;
        for(int j=0;j<sizeof(arr)/sizeof(int);j++){
            if(j!=i){
                ans*=arr[j];                
            }
        }
        result.push_back(ans);
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
}