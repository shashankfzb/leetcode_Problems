#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,8,6,2,5,4,8,3,7};
    int h=0,b=0,area=0,maxarea=0;
    int j=sizeof(arr)/sizeof(int)-1;
    for(int i=0;i<j;){
        area=(j-i)*min(arr[i],arr[j]);
        if(area>maxarea){
            maxarea=area;
            h=i;
            b=j;

        }
        if(arr[i]<arr[j]){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<"max area : "<<maxarea<<endl<<"(height,breadth): "<<"("<<h<<","<<b<<")"<<endl;
}