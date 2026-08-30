class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int min_ind=0;
        int maxx=INT_MIN;
        int minn=INT_MAX;
        int max_ind=0;
for(int i=0;i<nums.size();i++){
  if(nums[i]<minn){
    min_ind=i;
    minn=nums[i];
  }
  if(nums[i]>maxx){
    max_ind=i;
    maxx=nums[i];
  }
}
int n=nums.size();
if(n==1) return 1;
 int left = min(min_ind, max_ind);
        int right = max(min_ind, max_ind);
        int option1 = right + 1;
        int option2 = n - left;
        int option3 = (left + 1) + (n - right);
        return min({option1, option2, option3}); 
    }
};