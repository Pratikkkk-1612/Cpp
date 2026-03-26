#include<iostream>
using namespace std;

void Insertionsort(int arr[],int n){
    for(int i = 0;i<n;i++){
        int j = 1;
        while(j>0 && arr[j-1]>arr[j])
        swap(arr[j],arr[j-1]);
        j--;
    }
}

int main(){
    int n;
    cout<<"Enter the Size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of the array"<<endl;
    for(int i = 0; i<n;i++) cin>>arr[i];
    Insertionsort(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
