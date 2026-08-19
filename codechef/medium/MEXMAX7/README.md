# MEXMAX7

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Mex and Max

You are given an array $A$ containing $N$ integers. Find the number of non-empty subsequences $B$ of $A$ such that:

- $|\text{mex}(B) - \max(B)| \le 1$

Here, $\text{mex}(B)$ represents the minimum non-negative integer not present in $B$, and $\max(B)$ represents the maximum element of $B$.

Since the answer may be large, find it modulo $998244353$. $2$ subsequences are different if the indices chosen are different, even if the elements are the same.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the number of subsequences satisfying $|\text{mex}(B) - \max(B)| \le 1$ modulo $998244353$.

### Constraints
- $1 \le T \le 100$
- $2 \le N \le 100$
- $0 \le A_i \le N$
### Sample 1:
Input
Output

```
5
3
0 1 2
6
2 2 1 0 0 4
5
0 1 2 3 4
5
1 1 1 2 2
3
3 3 3

```

```
5
34
9
7
0
```

### Explanation:

 **Test Case 1:**  The following are the good subsequences : $[0], [0, 1], [0, 1, 2], [1], [0, 2]$. For example, the first has a $\text{MEX}$ of $1$ and a $\max$ of $0$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-19T16:12:12.530Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long power(long long a, long long b) {
    long long res = 1;

    while (b > 0) {
        if (b & 1)
            res = res * a % MOD;

        a = a * a % MOD;
        b >>= 1;
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> cnt(N + 2, 0);

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }

        long long ans = 0;
        long long product = 1;

        // m = mex
        for (int m = 0; m <= N; m++) {

            // Case 1: max = m - 1
            // Only possible when m >= 1.
            if (m >= 1) {
                ans = (ans + product) % MOD;
            }

            // Case 2: max = m + 1
            if (m + 1 <= N) {
                long long waysMax =
                    (power(2, cnt[m + 1]) - 1 + MOD) % MOD;

                ans = (ans + product * waysMax) % MOD;
            }

            // Add requirement that value m must occur
            // for the next mex (m + 1).
            long long waysCurrent =
                (power(2, cnt[m]) - 1 + MOD) % MOD;

            product = product * waysCurrent % MOD;

            // If m is absent, no larger mex is possible.
            if (cnt[m] == 0)
                break;
        }

        cout << ans << '\n';
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/MEXMAX7)