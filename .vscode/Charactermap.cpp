#include<iostream>
#include<map>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string :"<<endl;
    cin>>s;
    map<char, int> mpp;
    for(int i = 0; i<s.size();i++){
        mpp[s[i]]++;
    }
    for(auto it :mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int q;
    cout<<"Enter the Number of Queries :"<<endl;
    cin>>q;
    while(q--){
        char c;
        cout<<"Enter your Query :"<<endl;
        cin>>c;
        cout<<"Number of counts :"<<mpp[c]<<endl;
    }

}

//Always use unordered_map instead of map because it takes O(1) time complexity for best and average case and O(N) for worst case.
//map takes O(log N) for all cases
//unordered_map permits only few datatypes while map permits all data types