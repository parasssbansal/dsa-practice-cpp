#include<iostream>
# include <vector>
using namespace std;
void preefixWithoutExtra(vector<int> nums){
    for(int i=1;i<nums.size();i++){
        nums[i]+=nums[i-1];
    }
    cout<<"The prefix sum array is: ";
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
int main(){
    vector<int> nums={1,2,3,4,5};
    preefixWithoutExtra(nums);
}