#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[5]={1,3,5,7,9};
    
    vector<int> mainsum;
    
    for(int i=0;i<5;i++){
        int sum=0;
        if(i==0){
            for(int j=1;j<5;j++){
                sum=sum+arr[j];
            }

        }
        else{
            for(int j=0;j<5;j++){
                if(j==i){continue;}
                else{sum=sum+arr[j];}
                
            }
        
        }
        mainsum.push_back(sum);
    }

    int min=mainsum[0];
    int max=mainsum[0];
    for(int i=0;i<mainsum.size();i++){
        cout<<"sum array is: "<<mainsum[i]<<" "<<endl;
    }

    for(int i=0;i<mainsum.size();i++){
        if(mainsum[i]>max){
            max=mainsum[i];
        }
        if(min>=mainsum[i]){
            min=mainsum[i];
        }
    }
    cout<<"min: "<<min<<endl<<"max: "<<max;
}