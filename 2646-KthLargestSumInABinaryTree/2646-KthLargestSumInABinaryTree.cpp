// Last updated: 18/08/2025, 18:35:09
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
    void bfs(TreeNode* root, int k,auto &pq){
        queue<TreeNode*> q;
//first level element add

        q.push(root);

        long long sum;

        while(!q.empty()){

            sum=0;

            //numbers of elements in 1 level 

            int n=q.size();

            //one level sum

            for(int i=0;i<n;i++){

                auto node=q.front();

                q.pop();

                sum+=node->val;

                //add element in new level

                if(node->left) q.push(node->left);

                if(node->right) q.push(node->right);

                }

            pq.push(sum);
//to find kth largest element 
//ex:- 1st 17,2nd 15,k=2  pop one time we get top()=15

            if(pq.size()>k) pq.pop();

            }
        }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        priority_queue<long long,vector<long long>, greater<long long>> pq;
        bfs(root,k,pq);
        return pq.size()<k?-1:pq.top();
    }
};