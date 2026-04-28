class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> v;
        int re= grid[0][0]%x;
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
              if((grid[i][j]%x)!=re){
                 return -1;
              }
              v.push_back(grid[i][j]);
            }
        }
        sort(v.begin(),v.end());
  int med=v[v.size()/2];
int op=0;
            for(int j=0;j<v.size();j++){
               op+=(abs(v[j]-med))/x;
            }
  
        
return op;
        
    }
};