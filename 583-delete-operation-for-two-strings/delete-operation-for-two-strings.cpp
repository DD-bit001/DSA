class Solution {
     private :
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
    int minDistance(string word1, string word2) {
          vector<vector<int>>dp(word1.size()+1,vector<int>(word2.size()+1,-1));
        int ans=solve(word1,word2,word1.size(),word2.size(),dp);
       int k= (word1.size()-ans)+(word2.size()-ans);
        return k;
    }
};