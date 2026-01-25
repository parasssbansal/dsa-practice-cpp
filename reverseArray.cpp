#include<iostream>
# include<vector>
#include<algorithm>
using namespace std;
void reverseArray(vector<int> &nums){
    int i=0;
    int j=nums.size()-1;
    while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
};
int main(){
    vector<int> nums={1,2,3,4,5};
    reverseArray(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}