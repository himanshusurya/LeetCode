class Solution {
public:
    void DFS(int start,vector<vector<int>>& isConnected, vector<int>& visited)
    {
        int n = isConnected[0].size();
        stack<int> s;
        s.push(start);
        while(!s.empty())
        {
            int top = s.top();
            s.pop();
            visited[top] = 1;
            //FInding the Neighbours
            for(int i = 0 ; i<n; i++)
            {
                if(top!=i && isConnected[top][i] == 1)
                {
                    if(visited[i] == 0)
                    {
                        s.push(i);
                    }
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected)
    {
        int n = isConnected[0].size();
        int provinces = 0;
        vector<int> visited(n,0);

        for(int i=0; i< n; i++)
        {
            if(visited[i] == 0)
            {
                DFS(i,isConnected,visited);
                provinces++;
            }
        }
        return provinces;        
    }
};