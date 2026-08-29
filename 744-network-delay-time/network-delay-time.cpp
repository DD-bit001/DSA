class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {

        vector<vector<pair<int,int>>> adj(n);
        for(int i=0;i<times.size();i++){
            int s=times[i][0]-1;
            int d=times[i][1]-1;
            int w=times[i][2];
            adj[s].push_back({w,d});
        }
        vector<int>dis(n,1e9);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,k-1});
        dis[k-1]=0;
        int fn=0;
        while(!pq.empty()){
          auto it =pq.top();
          pq.pop();
          int t=it.first;
          int node=it.second;
        
          for(auto temp:adj[node]){
            int time=temp.first;
            int nnode=temp.second;
           
            if(t+time<dis[nnode]){
                dis[nnode]=t+time;
          
                pq.push({dis[nnode],nnode});
            }
          }

        }
 int ans = 0;

        for (int i = 0; i < n; i++) {

            if (dis[i] == 1e9)
                return -1;

            ans = max(ans, dis[i]);
        }

        return ans;


    }
};