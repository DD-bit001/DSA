class Solution {
public:
    bool checkDivisibility(int n) {
   int k=n;
   int sum=0;
   int num=1;
   while(k>=1){
    int r=k%10;
    sum+=r;
    num*=r;
    k=k/10;
   }
   return n%(sum+num)==0;



    }
};