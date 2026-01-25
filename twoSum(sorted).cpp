#include<iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int>nums,int target){
    vector<int>ans;
    int i=0;
    int j=nums.size()-1;
    while(i<j){
        if(nums[i]+nums[j]==target){
            ans={nums[i],nums[j]};
            return ans;
        }else if(nums[i]+nums[j]<target){
            i++;
        }else{
            j--;
        }
    }
    return {};
}
int main(){
    vector<int>nums={1,2,4,9,15};
    int target=10;
    vector<int>ans=twoSum(nums,target);
    for(int i:ans){
        cout<<i<<" ";
    }
}