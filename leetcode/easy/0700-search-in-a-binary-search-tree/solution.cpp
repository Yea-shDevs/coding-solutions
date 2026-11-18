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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* P=root;
        TreeNode* Q=NULL;
        while(P!=NULL && P->val!=val ){
            if(val<P->val)
            P=P->left; 
            else 
            P=P->right;
        }
    printer(P);
    return P;
    }
   void printer(TreeNode* P){
    if(P==NULL)
        return;

    cout<<P->val;
    printer(P->left);
    printer(P->right);
}
};