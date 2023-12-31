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
    vector<int> preorderTraversal(TreeNode* root) 
    {
        stack<TreeNode*> stack;
        vector<int> preOrder;
        if(root == NULL)
        {
            return preOrder;
        }
        stack.push(root);        
        while(!stack.empty())
        {
            TreeNode* cur = stack.top();
            stack.pop();
            preOrder.push_back(cur->val);
            if(cur->right != NULL)
            {
                stack.push(cur->right);
            }
            if(cur->left)
            {
                stack.push(cur->left);
            }
        }
        return preOrder;       
    }
};