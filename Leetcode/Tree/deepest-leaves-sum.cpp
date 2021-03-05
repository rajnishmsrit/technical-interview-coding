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
    int maxCurrentDepth = 0;
    int sumAtCurrentMaxDepth = 0;
    int deepestLeavesSum(TreeNode* root , currentDepth=0) {
        if (root==NULL) return 0;

        currentDepth++;
        maxCurrentDepth = max (maxCurrentDepth, currentDepth);

        if (currentDepth == maxCurrentDepth){
            sumAtCurrentMaxDepth += root->val;
        }
        
        deepestLeavesSum(root->left, currentDepth);
        currentDepth = 0;
        deepestLeavesSum(root->right, currentDepth);
        return sumAtCurrentMaxDepth;
    }
};