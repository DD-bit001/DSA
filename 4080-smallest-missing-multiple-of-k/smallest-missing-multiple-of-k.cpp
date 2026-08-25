class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

     int n=nums.size();
vector<int> ans;
    for(int i=0;i<n;i++){
if(nums[i]%k==0){
   ans.push_back(nums[i]/k); 
}
    }
if(ans.size()==0) return k;
int num=INT_MAX;
sort(ans.begin(),ans.end());
int expected = 1;

        for (int x : ans) {
            if (x == expected) {
                expected++;
            }
        }

        return expected * k;

    }
};