# Binary Tree Inorder Traversal

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the `root` of a binary tree, return  *the inorder traversal of its nodes' values*.

 

 **Example 1:** 

 **Input:**  root = [1,null,2,3]

 **Output:**  [1,3,2]

 **Explanation:** 

 **Example 2:** 

 **Input:**  root = [1,2,3,4,5,null,8,null,null,6,7,9]

 **Output:**  [4,2,6,5,7,1,3,9,8]

 **Explanation:** 

 **Example 3:** 

 **Input:**  root = []

 **Output:**  []

 **Example 4:** 

 **Input:**  root = [1]

 **Output:**  [1]

 

 **Constraints:** 

- The number of nodes in the tree is in the range [0, 100].
- -100 <= Node.val <= 100

 

 **Follow up:**  Recursive solution is trivial, could you do it iteratively?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 10.8 MB (beats 66.90%)  
**Submitted:** 2026-10-01T08:36:44.251Z  

```cpp
class Solution {
public:

    void helper(TreeNode* root,vector<int> &ans) {
        if (root == NULL)
            return;
        helper(root->left,ans);       
        ans.push_back(root->val); 
        helper(root->right,ans);      
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        helper(root,ans);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/binary-tree-inorder-traversal/)