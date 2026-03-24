#include<iostream>
using namespace std;

int sum = 0;

int fib(int n){
    if(n=0){
        return 0;
    }
    if(n=1){
        return 1;
    }
    sum = fib(n-1)+fib(n-2);
    fib(n);

}

int main(){
    int n;
    cout<<"Enter a Number:"<<endl;
    cin>>n;
    fib(n-1);
    cout<<sum;
}