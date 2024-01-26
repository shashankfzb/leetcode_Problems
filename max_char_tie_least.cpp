//program to print maximum occuring character 
//if there is a tie than print the least occuring character



#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    cin>>str;
    int freq[256]={0};
    for(int i=0;i<str[i]!='\0';i++){
        freq[str[i]]++;
        
    }
    int max=0,count=0,min=1;
    for(int i=0;i<256;i++){
        if(freq[i]>max){
            max=freq[i];
        }
    
        
    }
    for(int i=0;i<256;i++){
        if(min == freq[i]){
            min=freq[i];
            break;
        }
    }
    
    
    for(int i=0;i<256;i++){
        if(freq[i]==max){
            count++;
        }
    }
    
    if(count>1){
        for(int i=0;i<256;i++){
            if(freq[i]==min){
                cout<<char(i);
            }
        }
    }
    else{
        for(int i=0;i<256;i++){
            if(freq[i]==max){
                cout<<char(i);
            }
        }
        
    }
    
    
}