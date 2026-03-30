class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set<int> s(nums.begin(), nums.end());
        int best = 0;

        for (int x : s) {
            // only start from "sequence starts"
            if (s.count(x - 1) == 0) {
                int len = 1;
                while (s.count(x + len)) {
                    len++;
                }
                best = max(best, len);
            }
        }
        return best;
        /*


        unordered_map<int,int> table;
        int longest = 0;
        for(auto num:nums)
        {
            if(table.find(num) == table.end())
                table[num]=1;
        }
        for(auto num:nums)
        {
            int cur = 0;
            if(table.find(num -1) == table.end() && table[num] == 1)
            {
                while(table.find(num) != table.end())
                {
                    table[num] = 0;
                    num++;
                    cur++;
                }
                longest = max(cur,longest);
            }
        }
        return longest;
        */
    }
};