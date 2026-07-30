class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        if(n<=8) return n;
    int k=n;
int num=k/8;
int pres=0;
for(int i=1;i<=num;i++){
pres+=8*i;

}
return pres+(k%8)*(num+1);
    }
};