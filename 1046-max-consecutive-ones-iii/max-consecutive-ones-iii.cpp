class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int n=nums.size();
        int maxx=0;
        map<int,int> m;
        while(r<n){
      m[nums[r]]++;
     if(m[0]>k){
        m[nums[l]]--;
        l++;
     }
     
        maxx=max(maxx,r-l+1);
        r++;
    }
    return maxx;
    }
};