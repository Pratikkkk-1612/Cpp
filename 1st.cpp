#include<iostream>
using namespace std;

int main(){
    int a,cnt = 0;
    cout<<"Please Enter a Number"<<endl;
    cin>>a;
    while (a != 0) {
        a = a/10;
        cnt = cnt +1;
    };
    cout<<cnt;

}