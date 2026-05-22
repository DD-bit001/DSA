class Solution {
    bool fun(vector<int>& nums,int ind, vector<int> &dp){
        if(dp[ind]!=-1) return dp[ind];
        if(ind>=nums.size()){
            return false;
        }
        if(ind==nums.size()-1) return true;
        bool temp=false;
        for(int i=1;i<=nums[ind];i++){
           temp=fun(nums,ind+i,dp);
           if(temp){
            return true;
           }

        }
        return dp[ind]=temp;

    }
public:
    bool canJump(vector<int>& nums) {
int maxx=0;
for(int i=0;i<nums.size();i++){
    maxx=max(maxx,nums[i]);
}
int n=nums.size();

        vector<int> dp(n,-1);
        return fun(nums,0,dp);
    }
};