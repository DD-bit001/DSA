class Solution {
public:
    int minimumCost(vector<int>& cost) {
     sort(cost.begin(),cost.end());
     int minn=0;
     int n=cost.size();
         for(int i=n-1;i>=0;i-=3){
       minn+=cost[i];
       if(i-1>=0) minn+=cost[i-1];
      
     }
if(minn==0) return cost[0];
return minn;

        
    }
};