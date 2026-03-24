#include<iostream>
using namespace std;

int main(){
    int num,i;
    cout<<"Please Enter a Number:"<<endl;
    cin>>num;
    if(num <= 0){
        cout<<"Please Enter a Valid Number:"<<endl;
    }
    else if (num == 1){
        cout<<"Not a prime Number"<<endl;
    }
    for(i = 2 ; i<= num;i++){
        if(num%i == 0){
            cout<<"Not a Prime";
        }
        else{
            cout<<"Prime";
        }
    }


 
}