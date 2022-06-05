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
    int height(TreeNode* root){
        if(root==NULL) return 0;
        
        int leftAns = height(root->left);
        if(leftAns==-1) return -1;
        
        int rightAns = height(root->right);
        if(rightAns==-1) return -1;
        
        if(abs(leftAns-rightAns)>1)
           return -1;
        
        return max(leftAns,rightAns) + 1;
    }
    bool isBalanced(TreeNode* root) {
       int h =  height(root);
        if(h==-1){
            return false;
        }
        else{
            return true;
        }
    }
};