class Solution {
    private:
    int fun(int target, vector<int>& coins,int ind,vector<vector<int>>&dp){
        if(dp[ind][target]!=-1) return dp[ind][target];
           if (target == 0) return 1;
        if(ind==0){
            if(target%coins[ind]==0){
                return 1;
            }
            else{
                return 0;
            }

        }
        int not_take=0+fun(target,coins,ind-1,dp);
        int take=0;
        if(coins[ind]<=target){
       take= fun(target-coins[ind],coins,ind,dp);
        }
        return dp[ind][target]= not_take+take;

    }
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return fun(amount,coins,n-1,dp);


        
    }
};