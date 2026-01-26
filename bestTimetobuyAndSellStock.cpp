#include<iostream>
#include <vector>
using namespace std;
int bestTimetoBuyAndSell(vector<int>nums){
    int currProfit=0,maxProfit=0;
    for(int i=0;i<nums.size();i++){
        int dailyChange=nums[i]-nums[i-1];
        currProfit=max(dailyChange,dailyChange+currProfit);
        maxProfit=max(currProfit,maxProfit);
    }
    return maxProfit;
}
int main(){
    vector<int>nums={7,1,5,3,6,4};
    int maxProfit=bestTimetoBuyAndSell(nums);
    cout<<maxProfit;
}
