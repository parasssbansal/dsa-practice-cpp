#include <bits/stdc++.h>
using namespace std;
bool isSorted(vector<int>nums, int n) {
    if(n == 1 || n == 0)
        return true;
    return (nums[n - 2] <= nums[n - 1]) && isSorted(nums, n - 1);
}
int main() {
    vector<int>nums={1,3,55,5,3};
    cout << (isSorted(nums, 5) ? "Sorted" : "Not Sorted");
    return 0;
}
