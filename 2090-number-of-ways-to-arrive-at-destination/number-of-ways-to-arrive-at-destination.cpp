class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
              const int MOD = 1e9 + 7;
        vector<vector<pair<int,int>>>adj(n);
      for(int i=0;i<roads.size();i++){
        int u=roads[i][0];
        int v=roads[i][1];
        int t=roads[i][2];
        adj[u].push_back({v,t});
        adj[v].push_back({u,t});
      }
      long long cnt=0;
      vector<long long >dis(n,LLONG_MAX);
      
priority_queue<
    pair<long long,int>,
    vector<pair<long long,int>>,
    greater<pair<long long,int>>
> pq;
      pq.push({0,0});
         vector<long long> ways(n, 0);
         ways[0]=1;
     dis[0]=0;
      while(!pq.empty()){
     auto it =pq.top();
     pq.pop();
     int node=it.second;
     long long d=it.first;
  
     for(auto it :adj[node]){
        int nnode=it.first;
        int edge_wt=it.second;
        if(d+edge_wt<dis[nnode]){
            dis[nnode]=d+edge_wt;
            pq.push({dis[nnode],nnode});
            ways[nnode]=ways[node];
        }
        else if (d + edge_wt == dis[nnode]) {

                    ways[nnode] =
                        (ways[nnode] + ways[node]) % MOD;
                }
     }

      }

return ways[n-1];
        
    }
};