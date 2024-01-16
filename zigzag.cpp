#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="PAYPALISHIRING";
    int numRows=3;
    int len=s.size();
    int numCols=(numRows*2)-2;
    string arr[numRows][numCols];
    int row=0,cols=0,step=1;
    vector<string> zigzag(numRows);
    for(int i=0;i<len;i++){
        arr[row][cols]=s[i];
        if(row==0){
            step=1;
        }
        if(row=numRows-1){
            step=-1;
        }
        row+=step;
        cols+=(step==1)?0:1;
    }
    for(int i=0;i<numRows;i++){
        cout<<zigzag[i];
    }
    
    
    

}