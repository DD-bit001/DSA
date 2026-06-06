class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int leftsum=0;
        int rightsum=0;
        int n=nums.size()-1;
        vector<int> left;
        vector<int> right;
        for(int i=0;i<nums.size();i++){
         left.push_back(leftsum);
         right.push_back(rightsum);
         leftsum+=nums[i];
         rightsum+=nums[n-i];




        }
        reverse(right.begin(),right.end());

        vector<int>ans(n+1,0);
for(int i=0;i<=n;i++){
    ans[i]=abs(left[i]-right[i]);
}
return ans;
    }
};