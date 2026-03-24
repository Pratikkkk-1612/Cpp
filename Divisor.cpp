#include<iostream>
using namespace std;

int main(){
    int num,i,a;
    cout<<"Please Enter a Number: ";
    cin>>num;
    for(i=1; i <= num; i++){
            a = num/i;
            if(num % i == 0){
                cout<<a<<endl;
            }
        
        
    }


}