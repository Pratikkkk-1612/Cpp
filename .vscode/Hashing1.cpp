#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Length of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array :"<<endl;
    for (int i = 0; i < n;i++){
        cin>>arr[i];
    }
    
    int hash[10]={0};
    for(int i = 0;i<n;i++){
        hash[arr[i]] +=1;
    }

    int q;
    cout<<"Enter the Number of Queries :"<<endl;
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter the Query :"<<endl;
        cin>>number;
        cout<<"No. of Occurences :"<<hash[number]<<endl;
    }
    int *max_ptr = max_element(hash,hash+10);
    int max_freq = *max_ptr;
    cout<<"Maximum Frequency :"<<max_freq<<endl;
    cout<<"Element with Maximum Frequency :"<<(max_ptr - hash)<<endl;
    return 0;
}