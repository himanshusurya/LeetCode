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
    int countNodes(TreeNode* root) 
    {
        if(root == NULL)
            return 0;
        
        auto *left = root, *right=root;
        auto hl = 0, hr = 0;
        
        while(left != NULL)
        {
            left = left->left;
            hl++;
        }
        
        while(right != NULL)
        {
            right = right->right;
            hr++;
        }
        if(hl == hr)
        {
            return pow(2,hl)-1;
        }
        
        return countNodes(root->left) + countNodes(root->right) + 1;        
    }
};