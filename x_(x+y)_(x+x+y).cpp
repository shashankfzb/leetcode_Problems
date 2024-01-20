#include<iostream>
using namespace std;
int main(){
    int x,y,n;
    cin>>x;
    cin>>y;
    cin>>n;
    int res;
    int o=x;
    int e=o+y;
    if(n==1){
        cout<<x;
        return 0;
    }

    else{

        for(int i=2;i<n+1;i++){
            if(i%2==0){
                e=o+y;
                cout<<"eve: "<<e<<endl;
            }
            else{
                o=o+x+y;
                e=o;
                cout<<"odd: "<<e<<endl;
            }
            
        }

    }
    cout<<e;
}