class Solution {
    int solve(string s){
        int l=0;
        int r=0;
        int n=s.size();
        unordered_map<char,long long> m;
        long long ans =0;
        while(r<n){
        m[s[r]]++;
        while(m['a']>=1&&m['b']>=1&&m['c']>=1){
            m[s[l]]--;
            if(m[s[l]]==0){
                m.erase(m[s[l]]);
            }
            l++;
        }
        ans+=r-l+1;
        
        r++;
        }
        return ans;
    }
public:
    int numberOfSubstrings(string s) {
        long long n=s.size();
        return n*(n+1)/2 - solve(s);
    }
};