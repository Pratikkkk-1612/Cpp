#include<iostream>
using namespace std;

int i=1,n;

void func(){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    i++;
    func();
}

int main(){
    cout<<"Please Enter a Number :"<<endl;
    cin>>n;
    func();
}