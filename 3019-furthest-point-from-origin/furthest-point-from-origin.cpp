class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        map<char, int> m;
        for(int i=0;i<moves.size();i++){
          m[moves[i]]++;
        }
        if(m['L']>m['R']){
            return m['L']+m['_']-m['R'];
        }
        if(m['R']>m['L']){
            return m['R']+m['_']-m['L'];
        }
        
        return m['_'];


            }
};