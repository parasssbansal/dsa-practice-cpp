# include<iostream>
# include<string>
# include<algorithm>
using namespace std;
bool isPalindrome(string s){
    int i=0;
    int j=s.size()-1;
    for(char &c:s){
        c=tolower(c);
    }
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
}
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    if(isPalindrome(s)){
        cout<<"The string is a palindrome."<<endl;
    }else{
        cout<<"The string is not a palindrome."<<endl;
    }
}