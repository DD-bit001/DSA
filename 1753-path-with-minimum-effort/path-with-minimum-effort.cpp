class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
    int n=heights.size();
    int m=heights[0].size();
    vector<vector<int >>d(n,vector<int>(m,1e9) );
    d[0][0]=0;
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
    pq.push({0,{0,0}});
    int dr[]={-1,0,0,1};
    int dc[]={0,-1,1,0};
    while(!pq.empty()){
        auto it =pq.top();
        pq.pop();
        int dis=it.first;
        int r=it.second.first;
        int c=it.second.second;
for(int i=0;i<4;i++){
    int nr=r+dr[i];
    int nc=c+dc[i];
  if(nr>=0&&nr<n&&nc>=0&&nc<m){
    int newEffort = max(dis, abs(heights[r][c] - heights[nr][nc]));
    if(newEffort<d[nr][nc]){
    d[nr][nc]=newEffort;
    pq.push({ d[nr][nc],{nr,nc}});
    }
  }
}
    }
return d[n-1][m-1]  ;
    }
};