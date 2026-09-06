# Roman to Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Roman numerals are represented by seven different symbols: `I`, `V`, `X`, `L`, `C`, `D` and `M`.

```
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
```

For example, `2` is written as `II` in Roman numeral, just two ones added together. `12` is written as `XII`, which is simply `X + II`. The number `27` is written as `XXVII`, which is `XX + V + II`.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not `IIII`. Instead, the number four is written as `IV`. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as `IX`. There are six instances where subtraction is used:

- I can be placed before V (5) and X (10) to make 4 and 9. 
- X can be placed before L (50) and C (100) to make 40 and 90. 
- C can be placed before D (500) and M (1000) to make 400 and 900.

Given a roman numeral, convert it to an integer.

 

 **Example 1:** 

```
Input: s = "III"
Output: 3
Explanation: III = 3.

```

 **Example 2:** 

```
Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.

```

 **Example 3:** 

```
Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

```

 

 **Constraints:** 

- 1 <= s.length <= 15
- s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
- It is guaranteed that s is a valid roman numeral in the range [1, 3999].

## Solution

**Language:** C++  
**Runtime:** 7 ms (beats 51.50%)  
**Memory:** 11.1 MB (beats 73.90%)  
**Submitted:** 2026-09-06T07:41:18.640Z  

```cpp
class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        vector<int> answer;

        int value[7] = {1, 5, 10, 50, 100, 500, 1000};
        char symbol[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};

        for(int i = 0; i < s.size(); i++) {
            char ch = s[i];

            int index = 0;

            for(int j = 0; j < 7; j++) {
                if(symbol[j] == ch) {
                    index = j;
                    break;
                }
            }

            answer.push_back(value[index]);
        }

        for(int j = 1; j < answer.size(); j++) {
            if(answer[j] < answer[j-1]||answer[j] == answer[j-1]) {
                continue;
            }
            else {
                answer[j] = answer[j] - answer[j-1];
                answer[j-1] = 0;
            }
        }

        for(int k = 0; k < answer.size(); k++) {
            sum = sum + answer[k];
        }

        return sum;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/roman-to-integer/)