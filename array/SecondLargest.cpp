#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int SecondLargest(vector <int> &nums){
    if(nums.empty()){
        return -1;
    }

    int high = nums[0];
    int sec = INT_MIN;
    for(int i = 1;i<nums.size();i++){
        if(nums[i]>high){
            sec = high;
            high = nums[i];
        }
        else if(nums[i]>sec && nums[i]!= high){
            sec = nums[i];
        }
    }
    return sec;
}

int main(){
    vector <int> nums = {42,5,66,2,33,74,89,55};
    int second = SecondLargest(nums);
    cout<<second;
    return 0;
}