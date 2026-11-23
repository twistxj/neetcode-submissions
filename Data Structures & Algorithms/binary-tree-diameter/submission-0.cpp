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
    int diameterOfBinaryTree(TreeNode* root) {
        //iterative DFS, don't use recursion
        //can store pair in map
        int height=0;
        int diam = 0;
        unordered_map<TreeNode* ,pair<int,int>> full = {
            {nullptr, {0,0}}
        };
        //full[nullptr] = {0,0};
        stack<TreeNode*> stack;
        stack.push(root);
        TreeNode* curr;
        while(!stack.empty()){
            curr = stack.top();

            if(curr->left && full.find(curr->left) == full.end()){
                stack.push(curr->left);
            }
            else if(curr->right && full.find(curr->right) == full.end()){
                stack.push(curr->right);
            }
            else{
                curr = stack.top();
                stack.pop();
                auto[leftH,leftD] = full[curr->left];
                auto[rightH,rightD] = full[curr->right];
                height = 1 + max(leftH,rightH);
                diam = max(leftH+rightH,max(leftD,rightD));
                full[curr] = {height,diam};
            }   
        }
         return full[root].second;
    }
};
