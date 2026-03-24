#include<iostream>
using namespace std;

int i = 1,n,prod = 1;

void fact(){
    if(i>n){
        return;
    }

    prod = prod*i;
    i++;
    fact();
}

int main(){
    cout<<"Please Enter a Number: ";
    cin>>n;
    fact();
    cout<<"Factorial of the Entered Number is :"<<prod<<endl;
}