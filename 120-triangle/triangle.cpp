class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int row = triangle.size();
        vector<vector<int>> dp = triangle;

        for (int i = row - 2; i >= 0; i--) {
            for (int j = 0; j < triangle[i].size(); j++) {
                dp[i][j] = triangle[i][j] + min(dp[i+1][j], dp[i+1][j+1]);
            }
        }

        return dp[0][0];
    }
};