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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) 
    {
        TreeNode* head = root1;
        stack<TreeNode*> stack;
        if(root1 == NULL && root2 == NULL)
        {
            return root1;
        }
        if(root1 == NULL)
        {
            return root2;
        }
        if(root2 == NULL)
        {
            return root1;
        }
        stack.push(root2);
        stack.push(root1);

        while(!stack.empty())
        {
            root1 = stack.top();
            stack.pop();
            root2 = stack.top();
            stack.pop();
            root1->val += root2->val;
            if(root1->right && root2->right)
            {
                stack.push(root2->right);
                stack.push(root1->right);
            }
            else if(root2->right)
            {
                root1->right = root2->right;
            }

            if(root1->left && root2->left)
            {
                 stack.push(root2->left);
                 stack.push(root1->left);                 
            }
            else if(root2->left)
            {
                root1->left = root2->left;
            }
        }
        return head;
    }
};