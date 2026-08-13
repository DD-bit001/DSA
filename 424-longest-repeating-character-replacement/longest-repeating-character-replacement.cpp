class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        int n=s.size();
  char ch =s[0];
  map<char,int> m;
  int maxx=0;
  int maxj=0;
  while(r<n){
     m[s[r]]++;
     maxj=max(maxj,m[s[r]]);
     int change =(r-l+1)-maxj;

    while(change>k){
        m[s[l]]--;
  
 l++;
 change=(r-l+1)-maxj;
    }

if(change<=k){
  maxx=max(maxx,r-l+1);
 
}
r++;
        }
return maxx;
    }
};