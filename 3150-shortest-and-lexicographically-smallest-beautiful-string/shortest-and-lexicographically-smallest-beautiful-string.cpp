class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        
        int n=s.size();
        int l=0;
        int r=0;
        int min_l=INT_MAX;
        string ans="";
        int cnt=0;
        while(r<n){
            if(s[r]=='1') cnt++;
            while(cnt>k){
                if(s[l]=='1') cnt--;
                l++;
            }
             while (l <= r && s[l] == '0' && cnt == k) {
                l++;
            }
            if(cnt==k){
                string temp=s.substr(l,r-l+1);
      if(r-l+1<min_l){
        ans=s.substr(l,r-l+1);
        min_l=r-l+1;
      }
   else if (temp.length() == min_l && temp < ans) {
                    ans = temp;
                }
            }
            r++;
        }
        return ans;
    }
};