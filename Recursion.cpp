#include<iostream>
using namespace std;

int i=0,n;

void func(){
    if(i>n){
        return;
    }
    cout<<"Pratik"<<endl;
    i++;
    func();
}

int main(){
    cout<<"please Enter a Number :"<<endl;
    cin>>n;
    func();
}
