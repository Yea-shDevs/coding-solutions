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