#include<iostream>
#include <vector>
using namespace std;
vector<int> remoteDuplicate(vector<int>nums){
    vector<int>ans;
    int i=0;
    int j=i+1;
    while(j<=nums.size()){
        if(nums[i]==nums[j]){
            j++;
            i++;
        }else{
            ans.push_back(nums[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
    vector<int>nums={1,2,2,2,3,5,5,6,8,8,10};
    vector<int>ans=remoteDuplicate(nums);
    cout<<"Array after removing duplicates: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}