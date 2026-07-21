class Solution {
    private:
    bool check(int s,vector<vector<int>>& graph,int color[]){
         int v=graph.size();
        queue<int>q;
        q.push(s);
        color[s]=0;
        while(!q.empty()){
         int node=q.front();
         q.pop();
         for(auto it : graph[node]){
            if(color[it]==-1){
       color[it]=!color[node];
       q.push(it);
            }
            else if(color[it]==color[node]){
        return false;
            }
         }

        }
        return true;

    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int v=graph.size();
       int color[v];
       
        for(int i=0;i<v;i++) color[i]=-1;
        for(int i=0;i<v;i++){
            for(int j=0;j<graph[i].size();j++){
                if(color[i]==-1){
                    if(!check(i,graph,color)) return false;
                }
            }
        }
return true;
    }
};