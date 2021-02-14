// C program for different tree traversals 
#include <iostream> 
using namespace std; 
  
/* A binary tree node has data, pointer to left child 
and a pointer to right child */
struct Node 
{ 
    int data; 
    struct Node* left, *right; 
    Node(int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    } 
};
  
class Solution {
	public:
        int maxDepth(Node* root){
            int leftDepth = 0, rightDepth = 0;
            if(root==NULL){
                return 0;
            }
            leftDepth = 1 + maxDepth(root->left);
            rightDepth = 1 + maxDepth(root->right);
            return max (leftDepth, rightDepth);
        }
};
/* Driver program to test above functions*/
int main() 
{ 
    struct Node *root = new Node(1); 
    root->left             = new Node(2); 
    root->right         = new Node(3); 
    root->left->left     = new Node(4); 
    root->left->right = new Node(5);
    Solution s;
    cout<< s.maxDepth(root);
    return 0; 
} 