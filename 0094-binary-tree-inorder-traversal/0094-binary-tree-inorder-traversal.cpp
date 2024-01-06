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
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int> ans;
        stack<TreeNode*> stack;
        if(root == NULL)
            return ans;
        stack.push(root);
        while(!stack.empty())
        {
            if(root != NULL)
            {
                if(root->right)
                {
                    stack.pop();
                    stack.push(root->right);
                    stack.push(root);
                }                
                if(root->left)
                {
                    stack.push(root->left);
                }
                root = root->left; 
            }
            else
            {
                root = stack.top();
                stack.pop();
                ans.push_back(root->val);
                if(!stack.empty() && (root->right == stack.top()))
                {
                    root = stack.top();
                }    
                else
                {   
                    root = NULL;
                }
            }
        }
    return ans;
    }
};