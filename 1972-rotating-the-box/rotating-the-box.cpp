class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int r=boxGrid.size();
        int c=boxGrid[0].size();
        vector<vector<char>> ans(c,vector<char>(r));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ans[j][r-i-1]=boxGrid[i][j];
            }
        }      
        for (int col = 0; col < r; col++) {
    int empty = c - 1;

    for (int row = c - 1; row >= 0; row--) {
        if (ans[row][col] == '*') {
            empty = row - 1;
        }
        else if (ans[row][col] == '#') {
            swap(ans[row][col], ans[empty][col]);
            empty--;
        }
    }
}
        return ans;
    }
};