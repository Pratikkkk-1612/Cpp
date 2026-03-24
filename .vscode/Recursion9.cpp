#include<iostream>
using namespace std;

int fib(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    int sum = 0;
    sum = sum + fib (n-1)+fib(n-2);

    return sum;
}

int main(){
    int n,result;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    result = fib(n);
    cout<<"The "<<n<<"th Fibonacci number is :"<<result<<endl;
    return 0;
    

}