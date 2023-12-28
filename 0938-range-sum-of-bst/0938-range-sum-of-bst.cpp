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
    int rangeSumBST(TreeNode* root, int low, int high) 
    {
        int sum = 0;
        stack<TreeNode*> Stack;
        Stack.push(root);
        while(!Stack.empty())
        {
            TreeNode* cur = Stack.top();
            Stack.pop();
            if(cur != NULL && low <= cur->val && cur->val <= high)
            {
                sum += cur->val;
            }
            if(cur->left != NULL)
                Stack.push(cur->left);                
            if(cur->right != NULL)
                Stack.push(cur->right);
            
        }
        return sum;
    }
};