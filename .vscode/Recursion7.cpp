#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string &s,int start,int end){
    if(start>=end){
        return true;
    }

    if(s[start] != s[end]){
        return false;
    }

    return isPalindrome(s,start+1,end-1);

}

int main(){
    string input;
    cout<<"Enter a string";
    cin>>input;

    int n = input.length();
    if (isPalindrome(input,0,n-1)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }
    return 0;
}