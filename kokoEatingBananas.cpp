# include<iostream>
# include <vector>
#include<algorithm>
using namespace std;
bool canEat(vector<int>nums,int k,int h){
    long long hours=0;
    for(int x:nums){
        hours+=(x+k-1)/k;
    }
    return hours<=h;
}
int kokoEatingSpeed(vector<int>nums,int h){
    int left=1;
    int right=*max_element(nums.begin(),nums.end());
    int ans=right;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(canEat(nums,mid,h)){
            ans=mid;
            right=mid-1;
        }else{
            left=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int>nums={3,6,7,11};
    int h=8;
    int ans=kokoEatingSpeed(nums,h);
    cout<<ans;
}