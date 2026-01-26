# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
vector<vector<int>>threeSum(vector<int>nums){
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-2;i++){
        if(i>0&&nums[i]==nums[i-1]){
            continue;
        }
        int j=i+1;
        int k=nums.size()-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==0){
                ans.push_back({nums[i],nums[j],nums[k]});
                j++;
                k--;
                while(j<k&&nums[j]==nums[j-1]){
                    j++;
                }
                while(k>j&&nums[k]==nums[k+1]){
                    k--;
                }
            }
            else if(sum<0){
                j++;
         }
            else{
                k--;
             }
        }
    }
    return ans;
}
int main(){
    vector<int>nums={1,2,3,-9,-6,10,-4,4,5,-1};
    vector<vector<int>>ans=threeSum(nums);
    for(auto triplet:ans){
        cout<<"[ ";
        for(auto num:triplet){
            cout<<num<<" ";
        }
        cout<<"] "<<endl;
    }
}