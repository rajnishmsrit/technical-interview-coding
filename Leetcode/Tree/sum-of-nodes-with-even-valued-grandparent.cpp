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
    int sum=0;
    void sumGrandChildrenIfExists(TreeNode* root){
        if(root->left != NULL && (root->left->left || root->left->right)) {
            if(root->left->left!=NULL){
                sum+=root->left->left->val;
            }
            if(root->left->right!=NULL){
                sum+=root->left->right->val;
            }
        }
        if(root->right != NULL && (root->right->left || root->right->right)) {
            if(root->right->left!=NULL){
                sum+=root->right->left->val;
            }
            if(root->right->right!=NULL){
                sum+=root->right->right->val;
            }
        }
    }
    int sumEvenGrandparent(TreeNode* root) {
        if (root==NULL) return sum;
        if (root->val %2 == 0) sumGrandChildrenIfExists(root);
        
        sumEvenGrandparent(root->left);
        sumEvenGrandparent(root->right);
        
        return sum;
    }
};