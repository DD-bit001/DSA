class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();
        if(n==1||n==2) return n;
        int x=2;
        while(x<=n){
            x=x*2;
        }
        return x;
    }
};