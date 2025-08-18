// Last updated: 18/08/2025, 18:37:01
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
    vector<vector<int>> nodes;
    // nodes = [val,x-pos,y-pos]
    void dfs(TreeNode* root,int i,int j){
        if(!root) return;
        nodes.push_back({j,i,root->val});
        dfs(root->left,i+1,j-1);
        dfs(root->right,i+1,j+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        dfs(root,0,0);
        vector<vector<int>> ans;
        sort(nodes.begin(),nodes.end());
        int prevY = nodes[0][0];
        vector<int> temp;
        for(auto i: nodes){
            if(i[0]!=prevY){
                ans.push_back(temp);
                temp.clear();
                prevY = i[0];
                temp.push_back(i[2]);
            }else{
                temp.push_back(i[2]);
            }
            // cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
        }
        ans.push_back(temp);
        return ans;
    }
};