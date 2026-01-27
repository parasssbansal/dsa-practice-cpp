#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>>mergeIntervals(vector<vector<int>>nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    int rows=nums.size();
    ans.push_back(nums[0]);
    for(int i=1;i<nums.size();i++){
        if(ans.back()[1]>=nums[i][0]){
            ans.back()[1]=max(ans.back()[1],nums[i][1]);
        }else{
            ans.push_back(nums[i]);
        }

    }
    return ans;
}
using namespace std;
int main(){
    vector<vector<int>>nums={{1,3},
                              {2,6},
                              {8,10},
                              {15,18}};
    vector<vector<int>>ans=mergeIntervals(nums);
    for(auto x:ans){
        cout<<"["<<x[0]<<","<<x[1]<<"] ";
    }
}