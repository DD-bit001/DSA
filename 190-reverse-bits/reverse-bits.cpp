class Solution {
  private:
  string fun(int n){
    string s="";
    while(n>0){
        if(n%2==0){
            s+='0';
        }
        else{
            s+='1';
        }
        n=n/2;
    }
      while(s.size() < 32) s += '0';  // add this
    return s;
  }

public:
    int reverseBits(int n) {

        string s = fun(n);
        long long k = 1;
        long long num = 0;

        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] == '1'){
                num += k;
            }
            k = k * 2;
        }

        return num;
    }
};