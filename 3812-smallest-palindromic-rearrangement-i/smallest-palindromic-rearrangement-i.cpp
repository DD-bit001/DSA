class Solution {
public:
    string smallestPalindrome(string s) {
        string m =s;   
        int n=s.size();
        if(n==1) return s;
        if(n==3) return s;
        sort(m.begin(),m.begin()+n/2);
        vector<char> v(s.size());
       for (int i = 0; i < n / 2; i++) {
    v[i] = m[i];
    v[n - i - 1] = m[i];
}
if (n % 2 == 1)
    v[n / 2] = m[n / 2];
        string ans="";
        for(int i=0;i<v.size();i++){
    ans+=v[i];
        }
        return ans ;
        
    }
};