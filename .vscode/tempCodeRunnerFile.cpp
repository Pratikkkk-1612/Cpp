#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter the String :"<<endl;
    cin>>s;

    int hash[26] = {0};
    for(int i = 0;i<s.size();i++){
        hash[s[i] - 'a']++;
    }

    int q;
    cout<<"Enter the Number of Queries you want to ask :"<<endl;
    cin>>q;
    cout<<"Enter the Query :"<<endl;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
    return 0;
    

}