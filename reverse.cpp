#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<int>&nums){
    int left=0;
    int right=nums.size()-1;
    while(left<right){
        swap(nums[left],nums[right]);
        //2nd way to swap
        // nums[left]=nums[left]+nums[right]-(nums[right]=nums[left]);
        left++;
        right--;
    }
}
int main(){
    vector<int>nums={1,2,3,4,5};
    reverseArray(nums);
    for(int x:nums){
        cout<<x<<" ";
    }
}