#include<iostream>
using namespace std;

int main(){
    int n;
    int arr[6] = {1,3,2,55,99,7};
    n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n-1;i++){
        for(int j = 0;j<= n-2;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int k = 0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}