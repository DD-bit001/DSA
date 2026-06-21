class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        vector<int> ice=costs;
        sort(ice.begin(),ice.end());
        int cnt=0;
        for(int i=0 ;i<costs.size();i++){
            if(ice[i]<=coins){
                coins-=ice[i];
                cnt++;
            }
            else {
                break;
            }
        }
        return cnt;
    }
};