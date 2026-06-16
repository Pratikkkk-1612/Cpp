#include<iostream>
#include<vector>
using namespace std;

int LargestElement(vector<int> & nums){
    if(nums.empty()){
        return -1;
    }

    int high = nums[0];
    for(int i = 1;i<nums.size();i++){
        if(nums[i]>high){
            high = nums[i];
        }
    }
    return high;
    
}

int main(){
    std::vector<int> nums = {8,55,1,2,3,430,61,6,4};
    int max = LargestElement(nums);
    cout<<"The Largest Element is:"<<endl<<max;

}