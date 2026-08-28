# NOTEBOOK - Rating 563

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-28T10:23:49.424Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int Y= N*50;
	    int profit= Y-((0.2*Y)+(0.2*Y)+(Y*0.3));
	    cout<<profit<<endl;
	}

}

```

---

[View on CodeChef](https://www.codechef.com/problems/NOTEBOOK)