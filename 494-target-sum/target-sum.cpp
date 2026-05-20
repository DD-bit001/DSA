class Solution {
    int fun(vector<int>& nums,int ind,int target){
        if (ind==0){
            int cnt=0;
            if(target-nums[ind]==0) {
                cnt++;
            }
            if(target+nums[ind]==0) cnt++;
            return cnt; 
        }
        int add=fun(nums,ind-1,target+nums[ind]);
        int sub=fun(nums,ind-1,target-nums[ind]);
        return add+sub;

    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
    return fun(nums,n-1,target);


        
    }
};