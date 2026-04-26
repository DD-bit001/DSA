class Solution {
public:
    bool judgeCircle(string moves) {

        map<char,int> m;
      m['L']=m['R']=m['U']=m['D']=0;
        for(int i=0;i<moves.size();i++){
            m[moves[i]]++;
        }
        if(m['L']==m['R']&&m['U']==m['D']){
            return true;
        }
return false;


    }
};