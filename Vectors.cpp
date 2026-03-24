#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.push_back(3);
    v.push_back(4);
    v.emplace_back(5);
    
    vector<int>::iterator it = v.begin();
    for(auto it = v.begin();it != v.end();it++){
        cout<<*(it)<<" ";
    }cout<<endl;

    v.erase(v.begin()+1);
    for(auto it = v.begin();it != v.end();it++){
    cout<<*(it)<<" ";
    }cout<<endl;

    v.erase(v.begin()+1,v.begin()+3);
    for (auto it:v){
        cout<<it<<" ";
    }cout<<endl;

    v.insert(v.begin()+1,6);
    for (auto it:v){
        cout<<it<<" ";
    }cout<<endl;

    v.insert(v.begin()+2,3,7);
    for(auto it: v){
        cout<<it<<" ";
    }cout<<endl;

    vector<int> z;
    z.push_back(8);
    z.emplace_back(9);

    v.insert(v.begin()+4,{8,9});
    for(auto it:v){
        cout<<it<<" ";

    }cout<<endl;

    vector<int> copy(5,10);

    v.insert(v.begin(),copy.begin()+3,copy.end());
    v.pop_back();
    v.empty();
    v.clear();

    for(auto it:v){
        cout<<it<<" ";

    }



}