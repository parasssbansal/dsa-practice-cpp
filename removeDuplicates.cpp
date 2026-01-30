# include<iostream>
# include<vector>
#include <unordered_set>
using namespace std;
vector<int> removeDuplicates(vector<int>& nums) {
    unordered_set<int> s;
    vector<int> result;

    for (int x : nums) {
        if (s.insert(x).second) {
            result.push_back(x);
        }
    }
    return result;
}

int main(){
    vector<int>nums={1,1,2,43,2,3};
    vector<int>ans=removeDuplicates(nums);
    for(int x:ans){
        cout<<x<<" ";
    }
}