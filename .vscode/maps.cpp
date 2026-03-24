#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of the array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of the array :"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    map <int, int> mpp;
    for(int i =0;i<n;i++){
        mpp[arr[i]]++;

    }

    //iterating through an map
    for(auto it :mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }


    int q;
    cout<<"Enter the Number of Queries :"<<endl;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }

}