class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int maxArea = 0;
        int left = 0;
        for(int right= height.size()-1; left<=right;)
        {
            int curArea = (right - left) * min(height[right], height[left]);
            maxArea = max(curArea,maxArea);
            if(height[right] > height[left])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return maxArea;
    }
};