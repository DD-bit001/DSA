class Solution {
public:
    int hammingWeight(int n) {
        int x=n;
        int cnt=0;
        while(x!=0){
            if(x%2==1) cnt++;
            x=x/2;
        }
        return cnt;
    }
};