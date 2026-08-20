class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int n2=t.size();
        if(n<n2)return "";
  map< char, int> m;
  for(int i=0;i<n2;i++){
    m[t[i]]++;
  }
int r=0;
int l=0;
int minL=INT_MAX;
int cnt=0;
int ind=-1;
while(r<n){
if(m[s[r]]>0) cnt++;
m[s[r]]--;
while(cnt==n2){
    if(r-l+1<minL){
        minL=r-l+1;
        ind=l;
    }
    m[s[l]]++;
    if(m[s[l]]>0)cnt--;
    l++;
}

r++;
}

return ind == -1 ? "" : s.substr(ind, minL);


    }
};