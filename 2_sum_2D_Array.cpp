#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x;
    cin>>y;
    int arr[x][y];
    for(int i =0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enter element: ";
    int element;
    cin>>element;
    int n1,n2=-1;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            for(int k=i;k<x;k++){
                for(int l=(k==i)?j+1:0;l<y;l++){
                    if(arr[i][j]+arr[k][l]==element){
                        n1=arr[i][j];
                        n2=arr[k][l];
                        break;
                    }
                }
            }
            
        }
    }
    if(n2==-1){
        cout<<-1;
    }
    else{
        cout<<n1<<" "<<n2;
    }
    
}