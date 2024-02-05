#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> words={"xngla","e","itrn","y","s","pfp","rfd"};
    bool ans;
    string str;
    for(int j=0;j<words.size();j++){
        int l=words[j].length();
        for(int i=0;i<=l-1;i++){
            if(words[j][i]==words[j][l-1]){
                ans=true;
                l--;
                continue;
            }
            else{
                ans=false;
                break;
            }
        }
        if(ans==true){
            str+=words[j];
            break;
        }
    }
    cout<<str;
}