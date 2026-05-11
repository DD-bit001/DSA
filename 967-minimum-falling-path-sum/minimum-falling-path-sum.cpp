class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
     vector<vector<int> > dp(r,vector<int>(c,0));
     for(int j=0;j<c;j++){
        dp[r-1][j]=matrix[r-1][j];
     }
     for(int i=r-2;i>=0;i--){
        for(int j=0;j<c;j++){
        int left =INT_MAX;
        int down=dp[i+1][j];
        int right=INT_MAX;
        if(j-1>=0){
            left=dp[i+1][j-1];
        }
        if(j+1<c){
            right=dp[i+1][j+1];
        }
dp[i][j]=matrix[i][j]+min(min(left,right),down);

        }
     }
     int minn=INT_MAX;
     for(int j=0;j<c;j++){
        minn=min(dp[0][j],minn);
     }
     return minn;   
    }
};