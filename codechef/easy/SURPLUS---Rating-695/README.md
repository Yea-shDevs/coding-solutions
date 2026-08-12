# SURPLUS - Rating 695

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Trade Surplus

Chefland consists of three countries named $A, B,$ and $C$.

- Country $A$ exports goods worth $A_1$ units and imports goods worth $A_2$ units.
- Country $B$ exports goods worth $B_1$ units and imports goods worth $B_2$ units.

A  *trade surplus*  occurs when a country exports  **strictly more**  than it imports.
Find whether country $C$ is in  *trade surplus*.

Note that the countries $A,B,C$ trade only between themselves.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of four space-separated integers $A_1, A_2, B_1$ and $B_2$ — denoting the exports and imports of countries $A$ and $B$ respectively.
### Output Format

For each test case, output on a new line, `YES`, if country $C$ is in  *trade surplus*  and `NO` otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings `YES`, `yEs`, `yes`, and `yeS` will all be treated as identical).

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq A_1, A_2, B_1, B_2 \leq 100$
### Sample 1:
Input
Output

```
4
4 6 5 4
1 1 1 1
10 5 12 6
1 100 1 100

```

```
YES
NO
NO
YES

```

### Explanation:

Let us define  *net export*  $= ($exports $-$ imports$)$.

 **Test case $1$:**  Net export of country $A$ is $4-6 = -2$, while of country $B$ is $5-4 = 1$. The net exports of countries $A$ and $B$ combined is $-2+1=-1$.
Thus, the net export of country $C$ is $1$ and it is in trade surplus.

 **Test case $2$:**  Net export of country $A$ is $1-1 = 0$, while of country $B$ is $1-1 = 0$. The net exports of countries $A$ and $B$ combined is $0$.
Thus, the net export of country $C$ is also $0$ and it is not in trade surplus.

 **Test case $3$:**  Net export of country $A$ is $10-5 = 5$, while of country $B$ is $12-6 = 6$. The net exports of countries $A$ and $B$ combined is $11$.
Thus, the net export of country $C$ is $-11$ and it is not in trade surplus.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-12T21:27:21.349Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
       int T;
       cin>>T;
       while(T--){
           int A1,A2,B1,B2,trA,trB;
           cin>>A1>>A2>>B1>>B2;
            trA= A1-A2;
            trB= B1-B2;
           int tt= trA+trB;
           int trC=-1*tt;
           if(trC>0)
           cout<<"YES"<<endl;
           else 
           cout<<"NO"<<endl;
       }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SURPLUS)