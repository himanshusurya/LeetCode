class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        int m = image.size();
        int n = image[0].size();


        int start_color = image[sr][sc];
        if(start_color == color)
        {
            return image;
        }

        queue<pair<int,int>> Q;

        Q.push({sr,sc});
        vector<int> dirr = {-1,0,0,1};
        vector<int> dirc = {0,-1,1,0};
        while(!Q.empty())
        {
            sr = Q.front().first;
            sc = Q.front().second;
            Q.pop();
            image[sr][sc] = color;
            for(int i = 0; i<4; i++)
            {
                    int newr = sr + dirr[i];
                    int newc = sc + dirc[i];
                    if((newc>=0 && newr>=0) && (newr<m && newc<n))
                    {
                        if(image[newr][newc] == start_color)
                            Q.push({newr,newc});
                    }
            }
        }

        return image;

    }
};