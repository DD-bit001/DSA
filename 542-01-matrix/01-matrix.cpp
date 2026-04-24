class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int l=mat.size();
        int b=mat[0].size();

        vector<vector<int>> dis(l,vector<int>(b,0));

       vector<vector<int>> vis(l,vector<int>(b,0));
       queue<pair <pair<int, int>, int >>q;
       for(int i=0;i<l;i++){
        for(int j=0;j<b;j++){
            if(mat[i][j]==0&&vis[i][j]==0){
               q.push({{i,j},0});
               vis[i][j]=1;
            }
        }
       }
      int    row[]={-1,0,+1,0};
          int   col[]={0,+1,0,-1};
         while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int step=q.front().second;
            q.pop();
            dis[r][c]=step;
          for(int i=0;i<4;i++){
            int nr=r+row[i];
            int nc=c+col[i];
            if(nr>=0&&nr<l &&nc>=0&&nc<b&&vis[nr][nc]==0){
            vis[nr][nc]=1;
            q.push({{nr,nc},step+1});
            }
          }
         }



return dis;






    }
};