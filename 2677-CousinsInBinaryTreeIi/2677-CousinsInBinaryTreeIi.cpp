// Last updated: 18/08/2025, 18:35:08
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
    void dfs(vector<TreeNode*> r){
        //in initial only root node in vector 
        //vector size in initial is 1
        if(r.empty()) return;
        int sum=0;
        //sum of all children node in same level
        for(auto node:r){
            //add node sum in same level 
            if(!node) continue;
            if(node->left) sum+=node->left->val;
            if(node->right) sum+=node->right->val;
            }
        vector<TreeNode*> child;
        for(auto node:r){
            //sum of all children node has same parent node
            int curSum=0;
            if(!node) continue;
            if(node->left) curSum+=node->left->val;
            if(node->right) curSum+=node->right->val;
            if(node->left){
                node->left->val=sum-curSum;
                child.push_back(node->left);
            }
            if(node->right){
                node->right->val=sum-curSum;
                child.push_back(node->right);
                }
            
            }
        dfs(child);
        }
            
    TreeNode* replaceValueInTree(TreeNode* root) {
        vector<TreeNode*> r;
        root->val=0;
        r.push_back(root);
        dfs(r);
        return root;
    }
};