class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
       int r= grid.size();
       int c= grid[0].size();
       vector<vector<int>> vis(r,vector<int>(c,0));
       int cnt =0;
       queue<pair<int, int > >q;
       for(int i=0;i<c;i++){
        if(grid[0][i]==1&&vis[0][i]==0){
            cnt++;
            q.push({0,i});

            vis[0][i]=1;
        }
        if(grid[r-1][i]==1&&vis[r-1][i]==0){
             cnt++;
            q.push({r-1,i});
            vis[r-1][i]=1;
        }
       } 
       for(int i=0;i<r;i++){
        if(grid[i][0]==1&&vis[i][0]==0){
             cnt++;
             vis[i][0]=1;
            q.push({i,0});
        }
        if(grid[i][c-1]==1&& vis[i][c-1]==0){
             cnt++;
             vis[i][c-1]=1;
            q.push({i,c-1});
        }
       }
      int    rrow[]={-1,0,+1,0};
          int   ccol[]={0,+1,0,-1};

       while(!q.empty()){
        int row=q.front().first;
        int col=q.front().second;
        vis[row][col]=1;
        q.pop();
        for(int i=0;i<4;i++){
            int nrow=row+rrow[i];
            int ncol=col+ccol[i];
    if(nrow>=0&&nrow<r &&ncol>=0&&ncol<c&&vis[nrow][ncol]==0&&grid[nrow][ncol]==1){
            vis[nrow][ncol]=1;
            q.push({nrow,ncol});
             cnt++;
               }
       }
       }
int total =0;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(grid[i][j]==1){
            total++;
        }
    }
}
return total-cnt;
    }
};