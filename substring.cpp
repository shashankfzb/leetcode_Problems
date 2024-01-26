//substring NEEDLE exist in string HAYSTACK

#include<iostream>
using namespace std;
int main(){
    string haystack;
    cin>>haystack;
    string needle;
    cin>>needle;
    int ind,result;

    for(int i=0;i<haystack.length();i++){
        if(haystack[i]==needle[0]){
            ind=i;
            for(int j=0;j<needle.length();j++){
                if(needle[j]==haystack[ind]){
                    result=i;
                    ind++;
                }
                else{
                    result=-1;
                    break;
                }
            }
        }
    }
    cout<<"your result is (index position is returned) : "<<result;

}