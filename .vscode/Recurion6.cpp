#include<iostream>
using namespace std;

int l = 0;
int arr[] = {1,2,3,4,5,6,7};
int n = sizeof(arr)/sizeof(arr[0]);
int r = n-1;


void Reverse(){
    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    l = l+1;
    r = r-1;
    Reverse();
}

void Print(){
    for(int i = 0; i < n;i++){
    cout<<arr[i]<<" ";
    }
}

int main(){
    Reverse();
    Print();

}
