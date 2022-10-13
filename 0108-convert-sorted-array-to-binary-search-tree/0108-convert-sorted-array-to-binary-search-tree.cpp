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
    TreeNode * helperSortedArrayToBst(vector<int>& nums, int left, int right)
    {
        TreeNode * newNode = NULL;
        if(left<=right)
        {
            int mid = right + (left -right)/2;
            newNode = new TreeNode;
            newNode->val = nums[mid];
            
            newNode->left  = helperSortedArrayToBst(nums,left, mid-1);
            newNode->right = helperSortedArrayToBst(nums,mid+1,right);
            
            
        }
        return newNode;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
       return helperSortedArrayToBst(nums, 0 , nums.size()-1);
    }
};
