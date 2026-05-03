class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
            int n =gas.size();
            int tank =0;
            int s=0;
            int total=0;
            vector<int>v(n,0);
        for(int i=0;i<n;i++){
           
         tank+=gas[i%n]-cost[i%n];
         total+=gas[i%n]-cost[i%n];
         if(tank<0){
            s=i+1;
            tank=0;
         }
        }
        if(total<0){
            return -1;
        }
 return s;
    }
};