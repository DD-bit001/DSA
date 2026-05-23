class Solution {
    private:
    int fun(vector<int>& prices,int ind , vector<vector<int>> &dp,int buy){
       
        if(ind>=prices.size()) return 0;
         if(dp[ind][buy]!=-1) return dp[ind][buy];
      int profit=0;
   
              if(buy){
                profit=max((fun(prices,ind+1,dp,0)-prices[ind]),(fun(prices,ind+1,dp,1)))  ;    
        }
        else{
            profit=max((prices[ind]+fun(prices,ind+2,dp,1)),(fun(prices,ind+1,dp,0)));
        }
        return dp[ind][buy]=profit;
    }
public:
    int maxProfit(vector<int>& prices) {
      int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));

return fun(prices,0,dp,1);


  
    }
};