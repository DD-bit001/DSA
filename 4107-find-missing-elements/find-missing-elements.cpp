class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> temp=nums;
        sort(temp.begin(),temp.end());
        int k=temp[0]+1;
        vector<int> ans;
        for(int i=1;i<nums.size()-1;i++){
if(temp[i]!=k) {
    ans.push_back(k);
    i--;
}
k++;
        }
        while(k<temp[nums.size()-1]){
            ans.push_back(k);
            k++;
        }
        return ans;
        
    }
};