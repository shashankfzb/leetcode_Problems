//Given an array of bird sightings where every element represents a bird type id,
// determine the id of the most frequently sighted type.
// If more than 1 type has been spotted that maximum amount, return the smallest of their ids.
#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int max=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }
    
    int freq[max+1]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    cout<<"answer is:"<<endl;
    for(int i=0;i<=max;i++){
        if(freq[i]!=0){
            cout<<i<<" : "<<freq[i]<<endl;
        }
    }
    
}