class Solution {
    private :
    int ans(vector<int>& nums, int k){
        int n=nums.size();
        int l=0;
        int r=0;
        int cnt=0;

        map<int,int> m;
        
               while(r<n){
            m[nums[r]]++;
            while(m.size()>k){
                m[nums[l]]--;
                
                if(m[nums[l]]==0){
                    m.erase(nums[l]);
                }
                l++;
           
            }
    cnt+=r-l+1;
            r++;
               }
      
      
        return cnt;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
  return ans(nums,k)-ans(nums,k-1);
    }
};