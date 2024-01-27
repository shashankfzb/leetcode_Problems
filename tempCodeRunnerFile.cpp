#include<iostream>
using namespace std;
int main(){
    int n=4;
    int nums[n]={1,2,3,4};
    int result[n]={1};
    int leftProduct = 1;
        for (int i = 0; i < n; i++) {
            result[i] *= leftProduct;
            leftProduct *= nums[i];
        }

        // Calculate products to the right of each element
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= rightProduct;
            rightProduct *= nums[i];
        }
    cout<<"(";
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    cout<<")";
}