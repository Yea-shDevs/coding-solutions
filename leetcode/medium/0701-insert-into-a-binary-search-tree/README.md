# Insert into a Binary Search Tree

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given the `root` node of a binary search tree (BST) and a `value` to insert into the tree. Return  *the root node of the BST after the insertion*. It is  **guaranteed**  that the new value does not exist in the original BST.

 **Notice**  that there may exist multiple valid ways for the insertion, as long as the tree remains a BST after insertion. You can return  **any of them**.

 

 **Example 1:** 

```
Input: root = [4,2,7,1,3], val = 5
Output: [4,2,7,1,3,5]
Explanation: Another accepted tree is:

```

 **Example 2:** 

```
Input: root = [40,20,60,10,30,50,70], val = 25
Output: [40,20,60,10,30,50,70,null,null,25]

```

 **Example 3:** 

```
Input: root = [4,2,7,1,3,null,null,null,null,null,null], val = 5
Output: [4,2,7,1,3,5]

```

 

 **Constraints:** 

- The number of nodes in the tree will be in the range [0, 104].
- -108 <= Node.val <= 108
- All the values Node.val are unique.
- -108 <= val <= 108
- It's guaranteed that val does not exist in the original BST.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 59.2 MB (beats 90.94%)  
**Submitted:** 2026-11-18T21:13:01.337Z  

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:


    TreeNode* insertIntoBST(TreeNode* root, int val) {
       /**********************/
       TreeNode* p= new TreeNode();
       p->val=val;
       p->left=NULL;
       p->right=NULL;
       /**********************/
       if(root==NULL)
       return p;
       TreeNode* P=root;
       TreeNode* Q=NULL;
       /********************************/
       while(P!=NULL){
        Q=P;
        if(val<P->val)
        P=P->left;
        else 
        P=P->right;
        /*******************************/
       }
       /**********************/
       if(Q!=NULL && val<Q->val)
       Q->left=p;
       else
       Q->right=p;
       /**********************/
      
       return root;
    }

};
```

---

[View on LeetCode](https://leetcode.com/problems/insert-into-a-binary-search-tree/)