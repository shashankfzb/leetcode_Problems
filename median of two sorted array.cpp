#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr1={3,4};
    vector<int> arr2={1,2};
    int n1=arr1.size();
    int n2=arr2.size();
    int n=n1+n2;
    for(int i=0,j=n1;i<n,j<n;i++){
        arr1[j]=arr2[i];
        j++;
    }
    sort(arr1.begin(),arr1.end());

    if(n%2==0){
        cout<<(arr1[n/2]+arr1[(n/2)-1])/2;
    }
    else{
        cout<<arr1[((n+1)/2)-1]
    }
}