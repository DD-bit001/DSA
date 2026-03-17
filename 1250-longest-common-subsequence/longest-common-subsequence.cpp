class Solution {
    int solve(string &text1,string &text2, int i , int j,vector<vector<int>> &dp){
        if(i==0||j==0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        if(text1[i-1]==text2[j-1]){
             return dp[i][j]= 1+solve(text1,text2,i-1,j-1,dp);

        }
        return dp[i][j]= 0+max(solve(text1,text2,i,j-1,dp),solve(text1,text2,i-1,j,dp));
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
   
        int i=text1.size();
        int j=text2.size();
             vector<vector<int>> dp (i+1,vector<int> (j+1,-1));
        int len=solve(text1,text2,i,j,dp);
        return len;
    }
};