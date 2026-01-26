# include<iostream>
# include <vector>
using namespace std;
int maxSubarray(vector<int>& nums){
    int minSum=0;
    int currSum=0;
    int totalSum=0;
    for(int i=0;i<nums.size();i++){
        currSum=min(nums[i],currSum+nums[i]);
        minSum=min(currSum,minSum);
        totalSum+=nums[i];
    }
    int maxCircularSum=totalSum - minSum;
    return maxCircularSum;
}
int main(){
    vector<int>nums={5,-3,5};
    int ans=maxSubarray(nums);
    cout<<ans;
}