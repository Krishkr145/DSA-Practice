#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5]={1,2,4,10,5};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];

        }
    }
    for(int i=0;i<5;i++){
        if(arr[i]>smax && arr[i]!=max){
            smax=arr[i];
        }
    }
    cout<<"The second largest element in the array is:"<<smax;

}