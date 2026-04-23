class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
         vector<int> ans;
         vector<int> temp;
         temp=nums;
         set<int> s;
         sort(temp.begin(),temp.end());
         for(int i=0;i<temp.size();i++){
            s.insert(temp[i]);
         }
        for(int i=1;i<=temp.size();i++){
            if(s.find(i)==s.end()){
                ans.push_back(i);
            }
        }


 return ans;


    }
};