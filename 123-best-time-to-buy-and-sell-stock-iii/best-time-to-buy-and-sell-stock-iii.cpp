class Solution {
    private:
    int fun(vector<int>& prices,int ind , vector<vector<vector<int>>>& dp,int buy,int tran){
     
       
        if(ind==prices.size()) return 0;
           if(tran>=2) return 0;
         if(dp[ind][buy][tran]!=-1) return dp[ind][buy][tran];
      int profit=0;
   
              if(buy){
                profit=max((fun(prices,ind+1,dp,0,tran)-prices[ind]),(fun(prices,ind+1,dp,1,tran)))  ;    
        }
        else{
            profit=max((prices[ind]+fun(prices,ind+1,dp,1,tran+1)),(fun(prices,ind+1,dp,0,tran)));
        }
        return dp[ind][buy][tran]=profit;
    }
public:
    int maxProfit(vector<int>& prices) {
           int n=prices.size();
        vector<vector<vector<int>>> dp(
            n, vector<vector<int>>(2, vector<int>(2, -1))
        );
    return fun(prices,0,dp,1,0);
    }
};