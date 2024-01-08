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
    TreeNode* increasingBST(TreeNode* root) 
    {
        stack<TreeNode*> stack;
        TreeNode* cur = root;
        TreeNode* prev = NULL;
        if(root == NULL)
        {
            return root;
        }
        
        while(!stack.empty() || cur != NULL)
        {
            if(cur != NULL)
            {
                if(cur->right)
                {
                    stack.push(cur->right);                    
                }
                stack.push(cur);
                cur = cur->left;
            }
            else
            {
                cur = stack.top();
                stack.pop();
                if(prev == NULL)
                {
                    root = cur;
                }
                else
                {
                    prev->left = NULL;
                    prev->right = cur;
                }
                prev = cur;
                if(!stack.empty() && cur->right == stack.top())
                {
                    cur = stack.top();
                    stack.pop();
                }
                else
                {
                    cur = NULL;
                }
            }
        }
        prev->left  = NULL;
        prev->right = NULL;
        return root;        
    }
};