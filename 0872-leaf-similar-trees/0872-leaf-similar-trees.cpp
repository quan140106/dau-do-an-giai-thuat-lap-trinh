/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

    void dfs(TreeNode* root,
             vector<int>& leaf) {

        if (!root)
            return;

        if (!root->left &&
            !root->right) {

            leaf.push_back(root->val);
        }

        dfs(root->left, leaf);

        dfs(root->right, leaf);
    }

    bool leafSimilar(TreeNode* root1,
                     TreeNode* root2) {

        vector<int> a;
        vector<int> b;

        dfs(root1, a);

        dfs(root2, b);

        return a == b;
    }
};