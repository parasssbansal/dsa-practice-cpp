# include<iostream>
#include<vector>
using namespace std;
int maxSubarraySum(vector<int>nums,int k){
    int windowSum=0;
    for(int i=0;i<k;i++){
        windowSum+=nums[i];
    }
    int maxSum=windowSum;
    for(int i=k;i<nums.size();i++){
        windowSum=windowSum+nums[i]-nums[i-k];
        maxSum=max(maxSum,windowSum);
    }
    return maxSum;
}
int main(){
    vector<int>nums={1,2,13,50,9,10,5};
    int k=3;
    int ans=maxSubarraySum(nums,k);
    cout<<ans;
}