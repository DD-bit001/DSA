class Solution {
    
    private :
   int delrow[4] = {-1, 0, 1, 0};
    int delcol[4] = {0, 1, 0, -1};
    void dfs(int row , int col,
        vector<vector<int>> &vis,vector<vector<char>>& board){
     vis[row][col]=1;
     for(int i=0;i<4;i++)
{
    int nrow=row+delrow[i];
    int ncol=col+delcol[i];
    if(nrow>=0&&nrow<board.size()&&ncol>=0&&ncol<board[0].size()&&!vis[nrow][ncol]&&board[nrow][ncol]=='O'){
dfs(nrow,ncol,vis, board);
    }
}    

      

        }
public:
    void solve(vector<vector<char>>& board) {
        int r=board.size();
        int c=board[0].size();
        vector<vector<int>> vis(r,vector<int>(c,0));
        for(int j=0;j<c;j++){
            if(!vis[0][j]&&board[0][j]=='O'){
             dfs(0,j,vis,board);
            }
            if(!vis[r-1][j]&&board[r-1][j]=='O'){
            dfs(r-1,j,vis,board);
            }
        }
        for(int i=0;i<r;i++){
            if(!vis[i][0]&&board[i][0]=='O'){
             dfs(i,0,vis,board);
            }
            if(!vis[i][c-1]&&board[i][c-1]=='O'){
            dfs(i,c-1,vis,board);
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(!vis[i][j]&&board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
        
    }
};