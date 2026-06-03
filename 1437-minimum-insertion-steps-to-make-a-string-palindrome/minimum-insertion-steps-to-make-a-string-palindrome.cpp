class Solution {
    public:
    int minInsertions(string s) {
         vector<int>prev(s.size()+1);
         vector<int>curr(s.size()+1);
         for(int i=0;i<=s.size();i++){
        prev[i]=0;
         }
        string t=s;
        reverse(t.begin(),t.end());
       for(int i=1;i<=s.size();i++){
       for(int j=1;j<=s.size();j++){

        if(s[i-1]==t[j-1]){
              curr[j]= 1+prev[j-1];

        }
        else{
            curr[j]=max(prev[j],curr[j-1]);
        }
   
       }
     prev=curr;
       }



        return  s.size()-prev[s.size()] ;
        
    }
};