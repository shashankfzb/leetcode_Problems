#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[6]={1,12,-5,-6,50,3};
    int k=4;
    float max=0;
    for(int i=0;i<6;i++){
        int temp=0;
        float sum=0;
        for(int j=i;temp<k && j<6;j++){
            sum+=arr[j];
            temp++;
        }
        sum/=k;
        if(sum>max){max=sum;}
    }
    cout<<max;
}