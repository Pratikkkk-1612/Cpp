#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[6] = {1,3,2,55,99,7};
    n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=n-2;i++){
        int min = 0;
        for(int j=0;j<=n-1;j++){
            if(arr[j]>arr[min]){
                min = j;
            }
        swap(arr[min],arr[j]);
        }
    }
    for(int k = 0;k<=n-1;k++){
        cout<<arr[k]<<" ";
    }
}

