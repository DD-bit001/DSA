class Solution {
public:
    int findGCD(vector<int>& nums) {
        int sm=INT_MAX;
        int lar=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sm=min(sm,nums[i]);
            lar=max(lar,nums[i]);

        }
        return gcd(sm,lar);
        
    }
};