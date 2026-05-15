// Last updated: 15/05/2026, 17:45:22
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
    void dfs(TreeNode* root,int &sum,int l,int h){
        if(root == nullptr) return;
        if(root->val>=l && root->val<=h) sum+=root->val;
        dfs(root->left,sum,l,h);
        dfs(root->right,sum,l,h);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        dfs(root,sum,low,high);
        return sum;
    }
};