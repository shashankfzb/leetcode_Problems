#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=18;
    vector<int> result;
    for(int i=0;n!=1;i++){
        if(n%2==0){
            result.push_back(n);
            n=n/2;
            if(n==1){
                result.push_back(n);
                break;
            }
        }
        else{
            result.push_back(n);
            n=(n*3)+1;
            if(n==1){
                result.push_back(n);
                break;
            }
        }
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
}
