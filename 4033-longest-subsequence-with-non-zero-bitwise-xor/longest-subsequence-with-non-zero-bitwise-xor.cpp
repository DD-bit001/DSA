class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        bool zeros=true;
        for(int i=0;i<n;i++){
            x=x^nums[i];
            if(nums[i]!=0){
         zeros=false;
            }

        }
        if (x != 0)
            return nums.size();
        if(zeros){
            return 0;
        }
        return n-1;
    }
};