//Time Complexity:O(n)
//Space Complexity:O(1)

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5]={-8,9,-18,20,7};
    int x=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>x){
            x=arr[i];
        }
    }
    cout<<"The maximum element of the array is:"<<x;
}