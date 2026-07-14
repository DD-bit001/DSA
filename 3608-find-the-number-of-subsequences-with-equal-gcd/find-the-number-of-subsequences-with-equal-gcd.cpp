class Solution {
 const long long MOD = 1000000007;
    private :
int helper(int i , int seq1, int seq2,vector<int>& nums,vector<vector<vector<int>>> &dp){
if(i==nums.size()){
    if(seq1!=seq2||(seq1==0&&seq2==0)) return 0;
    else return 1;
}
if(dp[i][seq1][seq2]!=-1) return dp[i][seq1][seq2];
long take=helper(i+1,gcd(nums[i],seq1),seq2,nums,dp);
long take1=helper(i+1,seq1,gcd(nums[i],seq2),nums,dp);
long no_take=helper(i+1,seq1 , seq2,nums,dp);
long ans = (take%MOD+take1%MOD+no_take%MOD)%MOD;
return dp[i][seq1][seq2]=ans;
}

public:

    int subsequencePairCount(vector<int>& nums) {
        int maxx=0;
        for(int i=0;i<nums.size();i++){

            maxx=max(maxx,nums[i]);
        }
        int n=nums.size();
        vector<vector<vector<int>>> dp(
    n,
    vector<vector<int>>(
        maxx+1,
        vector<int>(maxx+1, -1)
    )
);
return helper(0,0,0,nums,dp);

    }
};