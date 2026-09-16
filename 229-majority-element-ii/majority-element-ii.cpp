class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
  
     set<int> st;
     int n=nums.size();
map<int ,int> m;
for(int i=0;i<n;i++){
    m[nums[i]]++;
 if(m[nums[i]]>n/3){
    st.insert(nums[i]);
 }
}
vector<int> ans(st.begin(),st.end());
return ans;
    }
};