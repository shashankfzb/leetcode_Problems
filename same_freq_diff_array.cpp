#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n1=6;
    int arr1[n1]={6,1,7,7,8,1};

    int n2=5;
    int arr2[n2]={2,1,1,8,6};

    vector<int> result;

    int freq1[256]={0};
    int freq2[256]={0};

    for(int i=0;i<n1;i++){
        freq1[arr1[i]]++;
    }
    for(int i=0;i<n2;i++){
        freq2[arr2[i]]++;
    }
    for(int i=0;i<256;i++){
        if(freq1[i]!=0 && freq2[i]!=0){
            if(freq1[i]==freq2[i]){
                result.push_back(i);
            }

        }

    }
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

    
}