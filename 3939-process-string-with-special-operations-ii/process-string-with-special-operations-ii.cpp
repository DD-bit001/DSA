class Solution {
public:
    char processStr(string s, long long k) {
    long len =0;
    for(int i=0;i<s.size();i++){
       char ch=s[i];
       if(ch>='a'&&ch<='z') len++;
       else if(ch=='#') len=len*2;
       else if(ch=='*'){
        if(len>0){
            len--;
        }
       }



    }
    if(k>=len) return '.';
    int n=s.size();
    for(int i=n-1;i>=0;i--){
        char ch=s[i];
        if(ch=='*') len++;
        else if(ch=='#') {
            len=len/2;
            if(k>=len) k=k-len;

        }
        else if(ch=='%'){
            k=len-1-k;
        }
        else {
            len--;
            if(len==k) return ch;
        }

    }
    return '.';
    }
};