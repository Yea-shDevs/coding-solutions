class Solution {
public:
    int lengthOfLastWord(string s) {
        s = s.substr(s.find_first_not_of(' '),
             s.find_last_not_of(' ') - s.find_first_not_of(' ') + 1);
        int i=0;
        for(char ch:s)
        if(ch==' ')
           i++;
        

        if(i>0){     
        int space=s.rfind(' ');
        string answer=s.substr(space);
        return(answer.length()-1);
        }
        else
        return (s.length());
    }
};