# LBCC08 - Rating 646

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Problem (Shoes) - Solve the complete problem

Chef has $N$ friends.
Chef promised that he would gift a pair of shoes (consisting of one left shoe and one right shoe) to each of his $N$ friends.
Chef already has $M$ left shoes.

What is the minimum number of extra shoes that Chef will have to buy to ensure that he is able to gift a pair of shoes to each of his $N$ friends?  **Check sample test cases below for further clarity** 

### Input Format
- The first line contains a single integer $T$ - the number of test cases. Then the test cases follow.
- The first line of each test case contains two integers $N$ and $M$ - the number of Chef's friends and the number of left shoes Chef has.
### Output Format

For each test case, output the minimum number of extra shoes that Chef will have to buy to ensure that he is able to get $N$ pairs of shoes.

### Sample 1:
Input
Output

```
3
2 4
6 0
4 3

```

```
2
12
5

```

### Explanation:

 **Test Case 1:**  Chef initially has $4$ left shoes. He must buy $2$ right shoes to form $2$ pairs of shoes.

 **Test Case 2:**  Chef initially has no left shoes. He must buy $6$ more left shoes and $6$ more right shoes to form $6$ pairs of shoes.

 **Test Case 3:**  Chef initially has $3$ left shoes. He must buy $1$ more left shoe and $4$ more right shoes to form $4$ pairs of shoes.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-30T18:30:06.698Z  

```c_cpp
#include <stdio.h>

int main()
{
    int t;
    if (scanf("%d", &t) != 1) 
    return 0;
    
    while (t--)
    {
        int N, M;
        scanf("%d %d", &N, &M);
        
        if (M == 2 * N)
        {
            printf("%d\n", N);
        }
        else if(N>M) 
        {
            printf("%d\n", 2 * N - M);
        }
        else if(N<M){
                        printf("%d\n", N );

        }
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LBCC08)