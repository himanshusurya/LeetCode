class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int first = 0 , last = height.size()-1;
        int maxArea = 0;
        while(first < last)
        {
            auto area = 0;
            if(height[first] < height[last])
            {
                area = (height[first]) * (last - first);
                first = first + 1;
            }
            else if(height[first] > height[last])
            {
                area = (height[last]) * (last - first);
                last = last - 1;
            }
            else //Equals case
            {
                area = (height[last]) * (last - first);
                if(height[first+1] > height[last-1])
                {
                    first = first +1;
                }
                else
                {
                    last = last -1;
                }
            }
            if(area > maxArea)
                    maxArea = area;
        }
        return maxArea;
    }
};