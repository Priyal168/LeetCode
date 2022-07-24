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
private:
    bool helper(TreeNode* node1 , TreeNode* node2){
        if(!node1 and !node2) return true;
        if(!node1 or !node2) return false;
        if(node1->val!=node2->val) return false;
        return helper(node1->left,node2->right) and helper(node1->right,node2->left);
        return true;
    }
public:
    bool isSymmetric(TreeNode* root) {
            if(!root or (root and !root->left and !root->right)) return true;
            if(!root->left or !root->right) return false;
            return helper(root->left,root->right);
    }
};