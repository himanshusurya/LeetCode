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
    vector<int> postorderTraversal(TreeNode* root) 
    {
        stack<TreeNode*> stack;
        vector<int> postOrder;
        if(root == NULL)
            return postOrder;
        stack.push(root);        
        bool start = true;
        while(!stack.empty())
        {
            if(start)
            {
                stack.pop();
                start = false;
            }
            if(root != NULL)
            {
                if(root->right)
                {
                    stack.push(root->right);
                }
                stack.push(root);
                root = root->left;
            }
            else
            {
                root = stack.top();
                stack.pop();
                if(root->right && !stack.empty() && root->right == stack.top())
                {
                    stack.pop();
                    stack.push(root);
                    root = root->right;
                }
                else
                {
                    postOrder.push_back(root->val);
                    root = NULL;
                }
            }
        }
        return postOrder;
    }
};