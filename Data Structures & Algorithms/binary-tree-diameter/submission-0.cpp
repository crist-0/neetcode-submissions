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
    int height(TreeNode* rt) {
        if(rt == nullptr)
            return 0;
        int left = height(rt->left);
        int right = height(rt->right);

        return 1+max(left,right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;

        int ht = height(root->left) + height(root->right);
        int d1 = diameterOfBinaryTree(root->left);
        int d2 = diameterOfBinaryTree(root->right);
        return max({d1,d2,ht});
    }
};
