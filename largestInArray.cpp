#include<iostream>
#include<vector>
using namespace std;
int maxElement(vector<int>& nums){
    int max=INT_MIN;
    for(int x:nums){
        if(x>max){
            max=x;
        }
    }
    return max;
}
int main(){
    vector<int>nums={1,5,3,9,2,8};
    int ans=maxElement(nums);
    cout<<"The largest element in the array is: "<<ans;
}


