# include<iostream>
# include <vector>
using namespace std;
pair<int,int> findMaxMin(vector<int>&nums){
    int max=nums[0];
    int min=nums[0];
    for(int x:nums){
        if(x<min){
            min=x;
        }else if(x>max){
            max=x;
        }
    }
    return {max,min};
}
int main(){
    vector<int>nums={1,2,3,4,5,-2,0};
    pair<int,int>ans=findMaxMin(nums);
    cout<<"Max: "<<ans.first<<" "<<"Min: "<<ans.second;
}