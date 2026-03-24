#include<iostream>
#include<math.h>
using namespace std;

int dig(int num);
int func(int num, int div);

int main(){
    int n = 163;
    cout << endl;
    // cout<<"Enter a Number: ";
    // cin>>n;
    int div = dig(n);
    int result = func(n,div);
    if(n == result){
        cout<<"Armstrong\n";
    }
    else{
        cout<<"Not an Armstrong Number\n";
    }
    // cout << div << endl;
    // cout << result << endl;
}

int dig(int num){
    int cnt = 0;
    while (num != 0){
        num = num/10;
        cnt++;
    }
    return cnt;
}

int func(int num, int div){
    int rem = 0,sum = 0;
    while (num != 0){
        rem = num % 10;
        sum = sum + (pow(rem, div));
        num = num/10;
    }
    return sum;
}
