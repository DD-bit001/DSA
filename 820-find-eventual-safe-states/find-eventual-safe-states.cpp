class Solution {
    private:
    bool traverse(vector<vector<int>>& graph,int node , vector<int> &vis,vector<int> &pathVis,vector<int> & ans,vector<int> &check){
    vis[node]=1;
    pathVis[node]=1;
    bool temp=true;
    for(auto it : graph[node]){
        if(!vis[it]){
            if((traverse(graph,it,vis,pathVis,ans,check))==false){
                temp=false;
                return false;
            }
        }
        else if(pathVis[it]){
            temp=false;
            return false;
        }
         else if(check[it]==0){   
        temp=false;
        return false;
    }
    }
    if(temp){
        check[node]=1;
    }
    pathVis[node]=0;
return temp;
    }

public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v=graph.size();
        vector<int> ans ;
             vector<int> pathVis(v, 0);
     vector<int> check(v,0);
        vector<int> vis(v,0 );
        for(int i=0;i<v;i++){
           if(!vis[i]){
            traverse(graph,i,vis,pathVis,ans,check);
   }
           }
for(int i=0;i<v;i++){
    if(check[i]) ans.push_back(i);
}

        return ans ;

    }
};