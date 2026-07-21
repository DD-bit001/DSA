class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.size();
        int maxx=0;
   int left=0;
int right=0;
    
       int one=0;
       for(int i=0;i<n;i++){
        if(s[i]=='1') one+=1;

       }

   for(int i=0;i<n;i++){
   int lc =0;
int rc=0;
    if(s[i]=='1'){
        int left =i;
    
while (i < n && s[i] == '1') {
    i++;
}
 int right=i-1;
     
for(int j=left-1;j>=0;j--){
    if(s[j]=='0'){
        lc++;
    }
    else{
        break;
    }
}
for(int j=right+1;j<n;j++){
    if(s[j]=='0'){
        rc++;
    }
    else{
        break;
    }
}
if(lc&&rc){
    maxx=max(maxx,lc+rc);
}

    }
   }

return maxx+one;
    
       
    }
};