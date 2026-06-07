class Solution {
     private :
    int solve(string &text1,string &text2, int i , int j,vector<vector<int>> &dp){
        if(dp[i][j]!=-1) return dp[i][j];
        if(i==0) return j;
if(j==0) return i;
    
int sum1=0;
int sum2=0;
int sum3=0;
        if(text1[i-1]==text2[j-1]){
           return  dp[i][j] = solve(text1,text2,i-1,j-1,dp);
 
        }
        else{
          sum1=1+solve(text1,text2,i-1,j-1,dp);
          sum2=1+solve(text1,text2,i-1,j,dp);
          sum3=1+solve(text1,text2,i,j-1,dp);
        
        }
      

       return dp[i][j]=min(min(sum1,sum2),sum3);
    }
public:
    int minDistance(string word1, string word2) {
         vector<vector<int>>dp(word1.size()+1,vector<int>(word2.size()+1,-1));
    
        return solve(word1,word2,word1.size(),word2.size(),dp);
    }
};