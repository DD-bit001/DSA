class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
    queue<pair<int,pair<int,int>>>q;
    int n=grid.size();
    int m=grid[0].size();
    if(grid[0][0] == 1 || grid[n-1][m-1] == 1)
    return -1;
    vector<vector<int> >dis(n,vector<int>(m,1e9));
    dis[0][0]=1;
    q.push({1,{0,0}});
  int dr[] = {-1, -1, -1,  0, 0, 1, 1, 1};
  int dc[] = {-1,  0,  1, -1, 1,-1, 0, 1};
    while(!q.empty()){
        auto it =q.front();
        q.pop();
        int d=it.first;
        int r=it.second.first;
        int c=it.second.second;
        for(int i=0;i<8;i++){
            int nr=r+dr[i];
            int nc=c+dc[i];
            if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]==0&&d+1<dis[nr][nc]){
                dis[nr][nc]=1+d;
                q.push({1+d,{nr,nc}});
                       }
        }

    }
    return dis[n-1][m-1]==1e9 ? -1: dis[n-1][m-1];
    }
};