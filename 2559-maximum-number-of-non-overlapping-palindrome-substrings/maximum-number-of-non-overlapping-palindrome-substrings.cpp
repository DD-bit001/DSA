class Solution {
public:

    bool pallindrom(string &s,int i ,int j){
        bool temp=true;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return temp;
    }

   int solve(string &s , int &k , vector<vector<int>> &dp,int i , int j){
   int n=s.size();
    if(i>=n||j>=n){
        return 0;
    }
   if(dp[i][j]!=-1){
    return dp[i][j];
   }


    if(pallindrom(s,i,j)){
        int take=1+ solve(s,k,dp,j+1,j+k);
        int grow= solve(s,k,dp,i,j+1);
        int slide= solve(s,k,dp,i+1,j+1);


        return dp[i][j]=max(take,max(slide,grow));
    }
    int grow =solve(s,k,dp,i,j+1);
    int slide=solve(s,k,dp,i+1,j+1);
    return dp[i][j]=max(slide,grow);


   }

   
    int maxPalindromes(string s, int k) {
        int n=s.size();
        if(k==1) return s.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
   return solve(s,k,dp,0,k-1);

        
        
    }
};