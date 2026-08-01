# TENPACKETS - Rating 669

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Buy Ten Packets

Chef wants to buy $10$ packets of an item.

As it is festive season, Chef can buy

- $2$ packets for a total of $X$ rupees
- $4$ packets for a total of $Y$ rupees

It is known that $X \lt Y \leq 2 \cdot X$.

Determine the  **minimum**  cost Chef needs to pay to buy $10$ packets, if Chef can only buy packets of $2$ and $4$.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists two integers $X$ and $Y$, the costs of packets of $2$ and $4$ respectively.
### Output Format

For each test case, output the  **minimum**  cost Chef needs to pay to buy $10$ packets.

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq X \lt Y \leq 100$
- $Y \leq 2 \cdot X$.
### Sample 1:
Input
Output

```
4
5 10
8 12
98 99
1 2

```

```
25
32
296
5

```

### Explanation:

 **Test case $1$:**  Chef can buy $5$ packets of two, for $5\cdot 5 = 25$ rupees. It can be shown that there is no way to buy $10$ packets for less than $25$ rupees.

 **Test case $2$:**  Chef can buy $2$ packets of $4$ and $1$ packet of $2$ for $12\cdot 2 + 8\cdot 1 = 32$ rupees.

 **Test case $3$:**  Chef can buy $2$ packets of $4$ and $1$ packet of $2$ for $99\cdot 2 + 98\cdot 1 = 296$ rupees.

 **Test case $4$:**  Chef can buy $2$ packets of $4$ and $1$ packet of $2$ for $2\cdot 2 + 1\cdot 1 = 5$ rupees.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-01T18:14:23.567Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int X,Y;
        cin>>X>>Y;
        int c1=(3*X+Y);
        int c2=(2*Y+X);
        if(c1>c2)
        cout<<c2<<endl;
        else
        cout<<c1<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/TENPACKETS)