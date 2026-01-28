# include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int longestSubarray(vector<int>nums ,int k){
    unordered_map<int,int>mp;
    int sum=0;
    int count=0;
    mp[0]=1;
    for(int x:nums){
        sum+=x;
        if(mp.count(sum-k)){
            count+=mp[sum-k];
        }
        mp[sum]++;
    }
    return count;
}
int main(){
    vector<int>nums={1,1,1};
    int k=2;
    int ans=longestSubarray(nums,k);
    cout<<ans;
}