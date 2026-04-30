class Solution {
    private:
     int reverse(int n){
        int re=0;
        while(n>=1){
          re=re*10+n%10;
          n=n/10;
        }
        return re;
     }
public:
    int mirrorDistance(int n) {
 return abs(n-reverse(n)); 
    }
};