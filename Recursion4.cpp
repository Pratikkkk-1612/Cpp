#include<iostream>
using namespace std;

int i=0,n,sum =0;

void func(){
    if(i>n){
        return;
    }


    sum = sum + i;
    i++;
    func();
}

int main(){
    cout<<"Please Enter a Number :"<<endl;
    cin>>n;
    func();
    cout<<"The sum is "<<sum<<endl;
}