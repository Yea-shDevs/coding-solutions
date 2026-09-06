# Valid Palindrome

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A phrase is a  **palindrome**  if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` *if it is a  **palindrome**, or* `false` *otherwise*.

 

 **Example 1:** 

```
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

```

 **Example 2:** 

```
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

```

 **Example 3:** 

```
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

```

 

 **Constraints:** 

- 1 <= s.length <= 2 * 105
- s consists only of printable ASCII characters.

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.9 MB  
**Submitted:** 2026-09-06T11:26:07.001Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/valid-palindrome/)