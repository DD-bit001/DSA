class Solution {
public:
    int rob(vector<int>& nums) {
     vector<long long> dp(nums.size(),0);
     int n=nums.size();
     if(n==1) return nums[0];
     if(n==2) return max(nums[0],nums[1]);
     int i;
    dp[n-1]=nums[n-1];
    if(n>=2)
    i=n-2;
    dp[n-2]=max(nums[n-2],nums[n-1]);
    if(n>=3){
     i=n-3;
    }
  while(i>=0){
    dp[i]=max((nums[i]+dp[i+2]),dp[i+1]);
    i--;
  }
  return dp[0];
    }
};