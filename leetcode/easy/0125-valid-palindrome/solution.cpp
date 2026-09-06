class Solution {
public:
    bool isPalindrome(string s) {
        string str="", rev="";
        for(char ch:s){
        if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
        str=str+ch;}
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        rev=str;
        reverse(str.begin(), str.end());
                if (rev==str)
        return true;
        else 
        return false;
        
    }
};