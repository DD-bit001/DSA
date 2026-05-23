class Solution {
       private:
    int fun(vector<int>& prices,int ind , vector<vector<int>> &dp,int buy,int fee){
       
        if(ind==prices.size()) return 0;
         if(dp[ind][buy]!=-1) return dp[ind][buy];
      int profit=0;
   
              if(buy){
                profit=max((fun(prices,ind+1,dp,0,fee)-prices[ind]),(fun(prices,ind+1,dp,1,fee)))  ;    
        }
        else{
            profit=max((prices[ind]+fun(prices,ind+1,dp,1,fee)-fee),(fun(prices,ind+1,dp,0,fee)));
        }
        return dp[ind][buy]=profit;
    }
public:
    int maxProfit(vector<int>& prices, int fee) {
      
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));


return fun(prices,0,dp,1,fee);




    }
};