class Solution {
    private:

    bool fun(int ind, int sum1, int sum2,vector<int>& nums, vector<vector<int>>&dp){
   if(ind< 0) {
            return sum1 == sum2;
        }
         if(dp[ind][sum1] != -1) {
            return dp[ind][sum1];
        }

        bool take1=fun(ind-1,sum1+nums[ind],sum2,nums,dp);
        bool take2=fun(ind-1,sum1,sum2+nums[ind],nums,dp);

        return dp[ind][sum1]=take1||take2;


    }
public:
    bool canPartition(vector<int>& nums) {

        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2!=0) return false;
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        return fun(n-1,0,0,nums,dp);

    
    }
};