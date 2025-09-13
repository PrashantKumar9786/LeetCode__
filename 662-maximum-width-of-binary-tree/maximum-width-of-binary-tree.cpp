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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        long long ans = 0;
        queue<pair<TreeNode*, long long>>q;
        q.push({root, 0});
        while(!q.empty()){
            long long size = q.size();
            long long mmin = q.front().second;
            long long first, last;
            for(int i = 0; i<size; i++){
                long long curInd = q.front().second-mmin;
                TreeNode* node = q.front().first;
                q.pop();
                if(i == 0) first = curInd;
                if(i == size-1) last = curInd;
                if(node->left) 
                   q.push({node->left, curInd*2+1});
                if(node->right)
                   q.push({node->right, curInd*2+2});
            }
            ans = max(ans, last-first+1);
        }
        return ans;
    }
};