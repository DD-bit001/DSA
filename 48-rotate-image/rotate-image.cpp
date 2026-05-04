class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int nrow=matrix.size();
        int ncol=matrix[0].size();
        int startrow=0;
        int endrow=nrow;
        int startcol=0;
        int endcol=ncol;
        for(int i=0;i<endrow;i++){
            for(int j=i+1;j<endcol;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<endrow;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }

        
    }
};