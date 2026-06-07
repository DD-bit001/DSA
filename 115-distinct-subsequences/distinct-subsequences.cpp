class Solution {
     private :
    int solve(string &text1,string &text2, int i , int j,vector<vector<int>> &dp){
        if(dp[i][j]!=-1) return dp[i][j];
        if(j==0&&text2[j]==text1[i]){
            return 1;
        }
        if(i==0&j!=0){
            return 0;
        }
int sum1=0;
int sum2=0;
int sum3=0;
        if(text1[i-1]==text2[j-1]){
            sum1 = solve(text1,text2,i-1,j-1,dp);
 sum2=solve(text1,text2,i-1,j,dp);
        }
        else{
            sum3=solve(text1,text2,i-1,j,dp);
        }
      

       return dp[i][j]=sum1+sum2+sum3;
    }
public:
    int numDistinct(string s, string t) {
          vector<vector<int>>dp(s.size()+1,vector<int>(t.size()+1,-1));

        return solve(s,t,s.size(),t.size(),dp);
        
    }
};