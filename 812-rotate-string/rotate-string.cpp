class Solution {
public:
    bool rotateString(string s, string goal) {
  
        bool match;
        int n=s.size();
        if(s.size()!=goal.size()) return false;
        for(int j=0;j<s.size();j++ ){
            if(s[j]==goal[0]){
                match =true;
                 for(int i=0;i<goal.size();i++){
            if(goal[i]!=s[(j+i)%n]){
             match=false;
            }
            }
            if(match)return true;
        }
        }
        return false;
    }
};