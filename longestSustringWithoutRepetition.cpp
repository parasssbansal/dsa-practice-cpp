# include<iostream>
# include <vector>
using namespace std;
int lonestSubstring(vector<char> s){
    vector<int>lastIndex(256,-1);
    int left=0;
    int maxLen=0;
    for(int right=0;right<s.size();right++){
        if(lastIndex[s[right]]>=left){
            left=lastIndex[s[right]]+1;
        }
        lastIndex[s[right]]=right;
        maxLen=max(maxLen,right-left+1);
    }
    return maxLen;
}

int main(){
    vector<char> s={'a','b','c','a','d','e'};
    int ans=lonestSubstring(s);
    cout<<"The longest substring without repetition is: "<<ans;
}