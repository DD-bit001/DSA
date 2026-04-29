class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
   int i=0;
   for(auto j:m){
    for(int k=0;k<j.second;k++){
        nums[i]=j.first;
        i++;
    }
   }
        
    }
};