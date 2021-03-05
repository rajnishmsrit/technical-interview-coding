#include <iostream>
using namespace std;

// Data structure to store a binary tree node
struct Node
{
	int val;
	Node *left, *right;

	Node(int val)
	{
		this->val = val;
		this->left = this->right = nullptr;
	}
};

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
    vector<double> averageOfLevels(TreeNode* root) {
		vector <double> finalAvgResult;
        queue<TreeNode *> q;
        if(root) q.push(root);
        while(!q.empty()){
            int length = q.size();
            double levelSum = 0;
            for(int i=0; i < length; i++) {
                TreeNode *node = q.front();
                levelSum+=node->val;
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
                q.pop();
            }
            finalAvgResult.push_back((double)(levelSum/length));
        }
        return finalAvgResult;
    }
};

int main()
{
	Node* root = new Node(15);
	root->left = new Node(10);
	root->right = new Node(20);
	root->left->left = new Node(8);
	root->left->right = new Node(12);
	root->right->left = new Node(16);
	root->right->right = new Node(25);

  Solution s;
  cout << "The result starts after here ===========\n";
	return 0;
}
