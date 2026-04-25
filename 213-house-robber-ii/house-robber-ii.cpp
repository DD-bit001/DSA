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
  while(i>0){
    dp[i]=max((nums[i]+dp[i+2]),dp[i+1]);
    i--;
  }


   int m=n-1;
      vector<long long> dp2(m,0);
      int j;
      dp2[m-1]=nums[m-1];
      if(m>=2){
        j=m-2;
            dp2[m-2]=max(nums[m-2],nums[m-1]);
      }
      if(m>=3){
        j=m-3;
      
  while(j>=0){
    dp2[j]=max((nums[j]+dp2[j+2]),dp2[j+1]);
    j--;
  }
      }
if(dp2[0]>=dp[1]){
    return dp2[0];
}
return dp[1];

    }
};