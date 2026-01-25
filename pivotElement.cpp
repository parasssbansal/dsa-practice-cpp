#include<iostream>
#include<vector>
using namespace std;
int pivotElemnt(vector<int>nums){
    int leftSum =0;
    int totalSum=0;
    int rightSum=0;
    for(int i=0;i<nums.size();i++){
        totalSum+=nums[i];
    }
    for(int i=0;i<nums.size();i++){
        if(i==0){
            leftSum=0;
        }else{
            leftSum+=nums[i-1]; 
        }
        rightSum=totalSum-leftSum-nums[i];
        if(leftSum==rightSum){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>nums={1,2,3,0,1,2};
    int ans=pivotElemnt(nums);
    cout<<ans;
}