class Solution {
    private:
      private:
    int fun(vector<int>& prices,int ind , vector<vector<vector<int>>>& dp,int buy,int tran,int k){
     
       
        if(ind==prices.size()) return 0;
           if(tran>=k) return 0;
         if(dp[ind][buy][tran]!=-1) return dp[ind][buy][tran];
      int profit=0;
   
              if(buy){
                profit=max((fun(prices,ind+1,dp,0,tran,k)-prices[ind]),(fun(prices,ind+1,dp,1,tran,k)))  ;    
        }
        else{
            profit=max((prices[ind]+fun(prices,ind+1,dp,1,tran+1,k)),(fun(prices,ind+1,dp,0,tran,k)));
        }
        return dp[ind][buy][tran]=profit;
    }

public:
    int maxProfit(int k, vector<int>& prices) {
           int n=prices.size();
        vector<vector<vector<int>>> dp(
            n, vector<vector<int>>(2, vector<int>(k, -1))
        );
    return fun(prices,0,dp,1,0,k);

    }
};