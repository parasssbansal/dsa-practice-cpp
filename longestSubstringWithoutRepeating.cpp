#include<iostream>
#include <string>
#include<unordered_set>
using namespace std;
int lengthOfLongestSubstring(string s){
    unordered_set<char>st;
    int l=0;
    int maxLength=0;
    for(int r=0;r<s.length();r++){
        while(st.find(s[r])!=st.end()){
            st.erase(s[l]);
            l++;
        }
        st.insert(s[r]);
        maxLength=max(maxLength,r-l+1);
    }
    return maxLength;
}
int main(){
    string s="abcabcbb";
    int ans=lengthOfLongestSubstring(s);
    cout<<ans;
}