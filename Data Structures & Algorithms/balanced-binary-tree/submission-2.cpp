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


    bool isBalanced(TreeNode* root) {
        pair<bool,int> r = rec(root);
        if(r.first)
            return true;
        
        return false;
    }

    pair<bool, int> rec(TreeNode* root) {
        if(!root) {
            pair<bool,int> p = {true,0};
            return p;
        }
        
        pair<bool,int> b1 = rec(root->left);
        pair<bool,int> b2 = rec(root->right);
        pair<bool,int> rrt;

        if(b1.first && b2.first && abs(b2.second-b1.second ) <= 1) {
            rrt = {true, max(b2.second,b1.second)+1};

            return rrt;
        }
        rrt = {false, max(b2.second,b1.second)+1};

        return rrt;
    }
};
