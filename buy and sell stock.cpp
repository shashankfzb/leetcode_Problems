#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> prices={1, 7,2,5,3,6,4};
    int buy=INT_MAX;
    int sell=0,profit=0;
    for(int i=0;i<prices.size();i++){
        if(prices[i]<buy){
            buy=prices[i];
        }
        profit=prices[i]-buy;
        if(profit>sell){
            sell=profit;
        }
    }
    cout<<"Buy: "<<buy<<endl<<"SEll: "<<sell<<endl;
    

}