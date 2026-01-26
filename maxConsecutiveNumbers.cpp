# include<iostream>
# include<vector>
#include<algorithm>
using namespace std;
vector<int>maxConsecutiveNumber(vector<int>nums){
    vector<int>ans;
    sort(nums.begin(),nums.end());
    int currlength=1,maxLength=1;
    int currStart=nums[0];
    int maxStart=nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i]==nums[i-1]){
            continue;
        }
        if(nums[i]-nums[i-1]==1){
           currlength++;
        }else{
            currlength=1;
            currStart=nums[i];
        }
        if(currlength>maxLength){
            maxLength=currlength;
            maxStart=currStart;
        }
    }
    return {maxStart,maxStart+maxLength-1};
}
int main(){
    vector<int>nums={100,4,200,1,3,2};
    vector<int>ans=maxConsecutiveNumber(nums);
    for(auto num:ans){
        cout<<num<<" ";
    }
}