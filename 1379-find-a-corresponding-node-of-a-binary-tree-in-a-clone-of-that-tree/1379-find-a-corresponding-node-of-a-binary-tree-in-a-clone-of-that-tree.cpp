/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* findCorrNode(TreeNode* root, int pos)
    {
        stack<TreeNode*> stack;
        TreeNode* node = NULL;
        while(!stack.empty() || root != NULL)
        {
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
                if(!stack.empty() && root->right && root->right == stack.top())
                {
                    stack.pop();
                    stack.push(root);
                    root = root->right;
                }
                else
                {
                    pos--;
                    if(pos == 0)
                    {
                        node = root;
                        break;
                    }
                    root = NULL;
                }
            }
        }
        return node;

    }
    int getPosition(TreeNode* root, TreeNode* target)
    {
        int count = 0;
        stack<TreeNode*> stack;
        while(root != NULL || !stack.empty())
        {
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
                if(!stack.empty() && root->right && root->right == stack.top())
                {
                    stack.pop();
                    stack.push(root);
                    root = root->right;
                }
                else
                {
                    count++;
                    if(target == root)
                        return count;
                    root = NULL;
                }
            }
        }
        return count;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) 
    {
        int pos = getPosition(original,target);
        TreeNode* result = findCorrNode(cloned,pos);
        return result;        
    }
};