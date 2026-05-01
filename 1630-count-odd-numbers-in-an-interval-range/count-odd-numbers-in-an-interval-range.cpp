class Solution {
public:
    int countOdds(int low, int high) {
     int range=(high-low+1);
     if(range%2==0){
        return range/2;
     }
     int num=0;
     if(high%2!=0){
        num=1;
     }
     return range/2+num;
        
    }
};