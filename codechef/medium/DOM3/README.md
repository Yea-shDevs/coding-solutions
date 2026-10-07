# DOM3

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Domination

 *As always, Hyder seeks Order in Chaos. And finally, he thinks Domination is the only way. Help him out!* 

For a tree $G$, a subset $S$ of the vertices of $G$ is called a  **dominating set**  if, for every vertex $u$ in $G$, either $u\in S$ or there exists a vertex $v\in S$ such that $(u,v)$ is an edge in $G$.

You are given a tree with $N$ vertices.
Find the number of dominating sets of the tree containing exactly $N-3$ vertices.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line of each test case contains a single integer $N$, denoting the number of vertices in the tree. The next $N-1$ lines each contain two space-separated integers $u$ and $v$, denoting an undirected edge between vertices $u$ and $v$.
### Output Format

For each test case, output on a new line the number of dominating sets containing exactly $N-3$ vertices.

### Constraints
- $1 \leq T \leq 3\cdot 10^4$
- $4 \leq N \leq 2\cdot 10^5$
- $1 \leq u,v \leq N$
- The edges form a tree.
- The sum of $N$ over all test cases does not exceed $2\cdot 10^5$.
### Sample 1:
Input
Output

```
3
4
1 2
1 3
1 4
5
1 2
2 3
3 4
4 5
9
8 3
8 5
5 1
8 6
6 4
3 7
1 9
7 2

```

```
1
3
61

```

### Explanation:

 **Test case $1$:**  We need dominating sets of size $1$. The only one is $\{1\}$, since vertex $1$ is adjacent to every other vertex. No other single vertex dominates the whole tree.

 **Test case $2$:**  We need dominating sets of size $2$. The valid sets are $\{2, 4\}$, $\{1, 4\}$ and $\{2, 5\}$. Every other pair leaves some vertex undominated.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T16:30:17.540Z  

```c_cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<vector<int>> adj(N + 1);

        for (int i = 0; i < N - 1; i++) {
            int u, v;
            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // Total ways to choose the 3 vertices which are NOT in the set
        long long total = 1LL * N * (N - 1) * (N - 2) / 6;

        // Count bad triples caused by leaf-parent pairs
        long long bad = 0;

        for (int v = 1; v <= N; v++) {
            if (adj[v].size() == 1) {
                // Triple must contain v and its parent
                bad += N - 2;
            }
        }

        // Two leaves having the same parent create the same bad triple.
        // Remove these double counts.
        for (int v = 1; v <= N; v++) {
            int leafCount = 0;

            for (int u : adj[v]) {
                if (adj[u].size() == 1)
                    leafCount++;
            }

            bad -= 1LL * leafCount * (leafCount - 1) / 2;
        }

        // Now handle degree-2 vertices.
        // Their closed neighbourhood contains exactly 3 vertices.
        // It is bad unless that triple was already counted through a leaf.
        for (int v = 1; v <= N; v++) {
            if (adj[v].size() == 2) {
                int a = adj[v][0];
                int b = adj[v][1];

                bool alreadyBad = false;

                // If a is a leaf, {a,v,b} was already counted.
                if (adj[a].size() == 1)
                    alreadyBad = true;

                // If b is a leaf, it was already counted.
                if (adj[b].size() == 1)
                    alreadyBad = true;

                if (!alreadyBad)
                    bad++;
            }
        }

        cout << total - bad << endl;
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/DOM3)