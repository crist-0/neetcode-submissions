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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> res;

        if(!root)
            return res;

        while(!q.empty()) {
            int k = q.size();
            vector<int> t;
            while(k--) {
                TreeNode* tmp = q.front();
                q.pop();
                t.push_back(tmp->val);
                if(tmp->left) 
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
            }
            res.push_back(t);
        }

        return res;
    }
};
