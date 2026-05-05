class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();

         vector<vector< long long >> grid(m,vector<long long>(n,0));
         if(obstacleGrid[m-1][n-1]==1 ) return 0;
          grid[m-1][n-1]=1;
    
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(obstacleGrid[i][j]==1){
                    grid[i][j]=0;
                 
                    continue;
                }
                if (i == m-1 && j == n-1) continue;
                    long long right = 0, down = 0;

if (j + 1 < n) right = grid[i][j+1];
if (i + 1 < m) down = grid[i+1][j];

grid[i][j] = right + down;
                }
                
            
        }
 return grid[0][0];
    }
};