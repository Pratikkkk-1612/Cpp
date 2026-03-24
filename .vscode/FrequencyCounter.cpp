#include<iostream>
using namespace std;

int fun(int number,int arr[],int c){
    int cnt = 0;
    for(int i = 0;i<c;i++){
        if(arr[i] == number){
            cnt = cnt + 1;
        }
        
    }return cnt;
}

int main(){
    int b,result;
    int a[] = {1,2,3,4,5,1,2,3,12,1,1,1};
    int n = sizeof(a)/sizeof(a[0]);

    cout<<"Please enter a Number:"<<endl;
    cin>>b;
    result = fun(b,a,n);
    cout<<result;

    

}