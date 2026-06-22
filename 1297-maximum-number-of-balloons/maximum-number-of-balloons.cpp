class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char , int> m;
        string s="balloon";
        for(int i=0;i<s.size();i++){
            m[s[i]]=0;
        }
   for(char c : text) {
    if(m.find(c) != m.end()) {
        m[c]++;
    }
}
        int minn=INT_MAX;
        for( auto it : m){
            if(it.first=='l'||it.first=='o'){
      minn=min(minn,it.second/2);
            }
            else {
      minn=min(minn,it.second);
            }
        }
        return minn;
        
    }
};