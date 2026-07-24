class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> pairXor;

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
        pairXor.insert(nums[i]^nums[j]);
}
unordered_set<int> ans;

for(int x : pairXor)
    for(int v : nums)
        ans.insert(x^v);

return ans.size();
    }
};