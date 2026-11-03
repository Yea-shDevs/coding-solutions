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
    TreeNode* build(vector<int>&preorder,vector<int>&inorder,int start, int end, int &k) {
        if (start>end)
            return NULL;
        int rootValue=preorder[k];
        k++;
        TreeNode*root=new TreeNode(rootValue);
        int i=start;
        while (inorder[i]!=rootValue)
            i++;
        root->left= build(preorder,inorder,start,i - 1,k);
        root->right= build(preorder,inorder,i + 1,end,k);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index = 0;
        return build(preorder, inorder, 0, inorder.size() - 1, index);
    }
};