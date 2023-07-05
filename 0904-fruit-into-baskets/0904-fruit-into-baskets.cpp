class Solution {
public:
    int totalFruit(vector<int>& fruits) 
    {
        int maxFruit = 1;
        unordered_map<int,int>Map;
        
        for(int s=0, e=0; e < fruits.size(); e++)
        {
            if(Map.size() >= 2) //Basket have 2 fruits
            {
                if(Map.find(fruits[e]) == Map.end()) //New fruit condtion
                {
                    int minIndex = fruits.size()-1;
                    for(auto index:Map)
                    {
                        minIndex = min(minIndex,index.second);
                    }
                    Map.erase(fruits[minIndex]);
                    s = minIndex + 1;
                    Map[fruits[e]] = e;
                }
                else
                {
                    Map[fruits[e]] = e;
                }
                
            }
            else
            {
                Map[fruits[e]] = e;
            }
            maxFruit = max(maxFruit, e-s+1);
        }
        return maxFruit;
    }
};
