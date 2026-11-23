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
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr){
            return nullptr;
        }
        queue<TreeNode*> queue;
        queue.push(root);
        TreeNode* currNode = root;
        while(!queue.empty())
        {
            currNode = queue.front();
            queue.pop();
            swap(currNode->left,currNode->right); //swaps left and right
            if(currNode->left) queue.push(currNode->left); //this is the new left
            if(currNode->right) queue.push(currNode->right);
        }
        return root;
    }
};
