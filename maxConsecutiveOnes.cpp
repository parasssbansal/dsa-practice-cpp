#include<iostream>
#include<vector>
using namespace std;
int maxConsecutive(vector<int>nums,int k){
    int l=0;
    int zeroes=0;
    int maxLength=0;
    for(int r=0;r<nums.size();r++){
        if(nums[r]==0){
            zeroes++;
        }
        while(zeroes>k){
            if(nums[l]==0){
                zeroes--;
            }
            l++;
        }
        maxLength=max(maxLength,r-l+1);
    }
    return maxLength;
}
int main(){
    vector<int>nums={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;
    int ans=maxConsecutive(nums,k);
    cout<<ans;
}