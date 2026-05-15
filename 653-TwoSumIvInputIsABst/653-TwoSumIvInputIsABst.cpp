// Last updated: 15/05/2026, 17:46:24
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
    void travel(TreeNode* root,vector<int>& nums){
        if(!root) return;
        travel(root->left,nums);
        nums.push_back(root->val);
        travel(root->right,nums);

    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        travel(root,nums);
        int n = nums.size();
        int i = 0,j = n-1;
        while(i<j){
            if((nums[i] + nums[j]) == k) return true;
            if((nums[i] + nums[j]) < k) i++;
            if((nums[i] + nums[j]) > k) j--;
        }
        return false;
    }
};