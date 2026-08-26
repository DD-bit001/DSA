class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>> adj(n);
        int s=flights.size();
        for(int i=0;i<s;i++){
            int u=flights[i][0];
            int v=flights[i][1];
            int w=flights[i][2];
            adj[u].push_back({v,w});
        }
     priority_queue<
            tuple<int, int, int>,
            vector<tuple<int, int, int>>,
            greater<tuple<int, int, int>>
        > pq;

        pq.push({0, src, 0});
    vector<vector<int>> d(n, vector<int>(k + 2, 1e9));
     d[src][0]=0;
     int st=0;
     

     while(!pq.empty()){
        auto [dis,node,stop]=pq.top();
        pq.pop();
          if(node == dst)
                return dis;
        if (stop == k+1) continue;
        for(auto it :adj[node]){
           int nnode=it.first;
            int cost=it.second;
            if(dis+cost<d[nnode][stop+1]){
                d[nnode][stop+1]=dis+cost;
                pq.push({d[nnode][stop+1],nnode,stop+1});
            }

        }
     
     
     }
     return -1;

    }
};