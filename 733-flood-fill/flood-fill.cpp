class Solution {
    private:
    void bfs(vector<vector<int>>& image, vector<vector<int>>&vist,int sr, int sc, int color,int old_color){
         int r= image.size();
     int c=image[0].size();
        vist[sr][sc]=1;
        image[sr][sc]=color;
        queue<pair<int, int>>q;
        q.push({sr,sc});
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            int del_row[]={-1,0,1,0};
         int del_col[]={0,1,0,-1};
         for(int i=0;i<4;i++){
            int nr=row+del_row[i];
            int nc=col+del_col[i];
            if(nr>=0&&nr<r&&nc>=0&&nc<c&&vist[nr][nc]==0&&image[nr][nc]==old_color){
            q.push({nr,nc});
            vist[nr][nc]=1;
            image[nr][nc]=color;
            }
         }

        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
     int r= image.size();
     int c=image[0].size();
    vector<vector<int>> vist(r,vector<int>(c,0));
    int old_color= image[sr][sc];
        bfs(image,vist,sr,sc,color,old_color);
        return image;   
    }
};