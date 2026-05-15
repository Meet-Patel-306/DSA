// Last updated: 15/05/2026, 17:46:37
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
    bool isSame(TreeNode* root,TreeNode* sub){
        if(root == nullptr && sub == nullptr) return true;
        if(root == nullptr || sub == nullptr) return false;
        if(root->val != sub->val) return false;
        return isSame(root->left,sub->left) && isSame(root->right,sub->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot == nullptr) return true;
        if(root == nullptr) return false;
        if(isSame(root,subRoot)) return true;
        return isSubtree(root->right,subRoot) || isSubtree(root->left,subRoot);
    }
};