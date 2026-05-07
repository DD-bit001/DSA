class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {

        sort(capacity.begin(),capacity.end(),greater<int>());
        int box=0;
        int to=0;
        for(int i=0;i<apple.size();i++){
            to+=apple[i];
        }
        for(int c : capacity){
            to-=c;
            box++;
            if(to<=0){
                return box;
            }
        }
     
        return box;
        
    }
};