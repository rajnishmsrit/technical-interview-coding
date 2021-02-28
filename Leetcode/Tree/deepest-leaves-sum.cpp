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

        if (currentDepth == maxCurrentDepth){
            sumAtCurrentMaxDepth += root->val;
        }
        
        currentDepth = 1 + deepestLeavesSum(root->left, currentDepth);

        return sumAtCurrentMaxDepth;

    }
};