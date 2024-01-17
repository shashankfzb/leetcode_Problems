#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={9,2,7,1,8};
    vector<int> ans;
    vector<int> nonprime;
    for(int i=0;i<arr.size();i++){
        int max=0;
        for(int j=2;j<=arr[i];j++){
            if(arr[i]%j==0){
                max++;
            }
            else{
                continue;
            }
        }
        if(max>=2){
            nonprime.push_back(arr[i]);
        }
        else{
            ans.push_back(arr[i]);
        }
    }
    for(int i=0;i<nonprime.size();i++){
        ans.push_back(nonprime[i]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}