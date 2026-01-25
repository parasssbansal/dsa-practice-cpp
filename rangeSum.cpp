#include<iostream>
# include<vector>
using namespace std;
int rangeSum(vector<int>nums,int left,int right){
    vector<int> prefixSum(nums.size());
    prefixSum[0]=nums[0];
    for(int i=1;i<nums.size();i++){
        prefixSum[i]=nums[i]+prefixSum[i-1];
    }
    int ans=prefixSum[right]-prefixSum[left-1];
    return ans;
}
int main(){
    vector<int>nums={1,2,3,4,5};
    int left=1;
    int right=3;
    int ans=rangeSum(nums,left,right);
    cout<<ans;
}