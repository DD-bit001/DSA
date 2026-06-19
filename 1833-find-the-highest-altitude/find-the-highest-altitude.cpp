class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans;
        int maxx=0;
        ans.push_back(0);
        for(int i =0;i<gain.size();i++){
           ans.push_back(gain[i]+ans[i]);
        maxx=max(maxx,ans[i+1]);
        }
        return maxx;
        
    }
};