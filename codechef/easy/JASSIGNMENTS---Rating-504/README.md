# JASSIGNMENTS - Rating 504

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-14T04:17:24.598Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    
    if (n<6)
        cout<<x<<endl;
    else if(n%6==0)
        cout<<x*(n/6)<<endl;
    else
    {
        int count=n%6;
        cout<<x*(n/6)+x<<endl;
    }
}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/JASSIGNMENTS)