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
    int maxDepth(TreeNode* root) {
        if(root == nullptr)
        {
            return 0;
        }
        queue<TreeNode*> queue;
        TreeNode* curr;
        int maxDepth = 0;
        queue.push(root);
        while(!queue.empty())
        {
            int size = queue.size();
            for(int i = 0 ; i<size;i++)
            {
                curr = queue.front();
                queue.pop();
                if(curr->left)
                {
                    queue.push(curr->left);
                }
                if(curr->right)
                {
                    queue.push(curr->right);
                }
            }
            
            maxDepth++;
        }
        return maxDepth;
    }
};
