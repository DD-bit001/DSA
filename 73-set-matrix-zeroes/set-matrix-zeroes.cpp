class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r= matrix.size();
        int c=matrix[0].size();
        queue<pair<int, int> > q;

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
              if(matrix[i][j]==0){
                q.push({i,j});
              }
            }
        }
        while(!q.empty()){
          int ro=q.front().first;
          int co=q.front().second;
          q.pop();
          for(int i=0;i<r;i++){
            matrix[i][co]=0;
          }
          for(int i=0;i<c;i++){
            matrix[ro][i]=0;
          }

        }
        
        
    }
};