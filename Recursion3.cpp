#include<iostream>
using namespace std;

int n;

void func(){
    if(n<1){
        return;
    }
    cout<<n<<endl;
    n--;
    func();
}

int main(){
    cout<<"Please Enter a Number :"<<endl;
    cin>>n;
    func();
}