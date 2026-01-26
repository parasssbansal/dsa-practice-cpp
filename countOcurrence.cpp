# include<iostream>
# include <vector>
using namespace std;
int countOcurrencs(vector<int>nums,int target){
    int left=0;
    int right=nums.size()-1;
    int first=-1;
    int last=-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]==target){
            first=mid;
            right=mid-1;
        }else  if(nums[mid]<target){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    left=0;
    right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                last=mid;
                left=mid+1;
            }else if(nums[mid]>target){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
    return last-first+1;
}
int main(){
    vector<int>nums={5,7,7,8,8,10};
    int target=8;
    int ans=countOcurrencs(nums,target);
    cout<<ans;
}