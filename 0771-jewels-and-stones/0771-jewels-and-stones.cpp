class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        set<char> Jewel;
        int count = 0;
        for(auto jw:jewels)
        {
            Jewel.insert(jw);
        }
        for(auto st:stones)
        {
            if(Jewel.find(st) != Jewel.end())
            {
                count++;
            }
        }
        return count;
    }
};