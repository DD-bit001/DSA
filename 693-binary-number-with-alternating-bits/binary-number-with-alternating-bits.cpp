class Solution {
public:
    bool hasAlternatingBits(int n) {
        int k=n;
        int flag1=1;
        int flag2=1;
        while(k>0){
      if(k%2==0&&flag1){
        flag1=0;
        flag2=1;

      }
      else if(k%2==1&&flag2){
        flag2=0;
        flag1=1;
              }
else{
    return false;
}
k=k/2;

        }
        return true;
    }
};