class Solution {
    private:
    int fun(vector<int>& coins, int target, int ind, vector<vector<int>>&dp){
        if(dp[ind][target]!=0){
            return dp[ind][target];
        }
        if(ind==0){
            if(target%coins[ind]==0){
                return target/coins[ind];
            }
            return 1e9;
        }
        int not_take=0+fun(coins,target,ind-1,dp);
        int take=INT_MAX;
        if(coins[ind]<=target){
            take=1+fun(coins,target-coins[ind],ind,dp);
        }
        return dp[ind][target]= min(take,not_take);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,0));
       int num=fun(coins,amount,n-1,dp);
       if(num==1e9||num==INT_MAX)
        return -1;
        return num;
    }
};