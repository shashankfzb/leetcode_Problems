#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="({[]})";
    stack<char> st;
    for(char c :s){
        if(c =="{" || c =="[" ||c =="("){
            st.push(c);
        }
        else{
            if(st.empty() || (c == ")" && st.top() != ")") ){
                cout<<"false";
                return false;
            }
            st.pop();
        }
    }
    cout<<"true";
    return st.empty();
}