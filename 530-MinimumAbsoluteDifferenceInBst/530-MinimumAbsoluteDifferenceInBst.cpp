// Last updated: 15/05/2026, 17:46:45
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
    TreeNode* prev = nullptr;
    int ans = INT_MAX;
    void travel(TreeNode* root){
        if(!root) return;
        travel(root->left);
        if(prev){
            ans = min(ans,abs(root->val-prev->val));
        }
        prev = root;
        travel(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        travel(root);
        return ans;
    }
};