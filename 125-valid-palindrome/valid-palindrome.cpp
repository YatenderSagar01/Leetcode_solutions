class Solution {
public:
    bool isPalindrome(string s) {
        string check = "";
       for(char ch:s){
        if(isalnum(ch)){
            check+=tolower(ch);
        }
       }
        string rev = check;
        reverse(check.begin(),check.end());

        return check==rev;
    }
};