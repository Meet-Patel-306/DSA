// Last updated: 18/08/2025, 18:36:54
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* pushVal(TreeNode* root,int val){
        if(!root) return new TreeNode(val);
        if(root->val>val){
            root->left = pushVal(root->left,val);
        }else{
            root->right = pushVal(root->right,val);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* head = nullptr;
        int n = preorder.size();
        for(int i: preorder){
            head = pushVal(head,i);
        }
        return head;
    }
};