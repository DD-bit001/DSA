class Solution {
     private :
    int solve(string &text1,string &text2, int i , int j,vector<vector<int>> &dp){
        if(i==0 && j==0)
    return 1;

if(j==0)
    return 0;

if(i==0){
    for(int k=1;k<=j;k++){
        if(text2[k-1] != '*')
            return 0;
    }
    return 1;
}

        if(dp[i][j] != -1)
            return dp[i][j];


        if(text1[i-1]==text2[j-1]||text2[j-1]=='?'){
             return dp[i][j]= solve(text1,text2,i-1,j-1,dp);

        }
        if(text2[j-1] == '*'){
            return dp[i][j] =
                solve(text1,text2,i,j-1,dp) ||
                solve(text1,text2,i-1,j,dp);
        }
        return dp[i][j]= 0;
    }
public:
    bool isMatch(string s, string p) {
              vector<vector<int>>dp(s.size()+1,vector<int>(p.size()+1,-1));
      
         solve(s,p,s.size(),p.size(),dp);
       return solve(s,p,s.size(),p.size(),dp);
    }
};