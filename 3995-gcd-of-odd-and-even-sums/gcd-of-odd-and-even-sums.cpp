class Solution {
public:
    int gcdOfOddEvenSums(int n) {
   int sumo=0;
   int sume=0;
 for(int i=1;i<=n*2;i++){
if(i%2==0){
    sume+=i;
}
else{
  sumo+=i;
}

 }
 return gcd(sume,sumo);
   


        
    }
};