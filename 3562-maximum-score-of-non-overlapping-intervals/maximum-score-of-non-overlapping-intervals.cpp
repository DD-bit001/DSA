class Solution {


    public:


    struct Node{
        long long score=-1;
        vector<int> idx;
    };
    vector<vector<Node>>dp;

    Node solve(vector<vector<int>>& intervals,int ind,int s,vector<int>&next){
  if(ind>=intervals.size()||s==0) return Node();
  if(dp[ind][s].score!=-1){
    return dp[ind][s];
  }
   Node skip=solve(intervals,ind+1,s,next);

   int wt=intervals[ind][2];
   int idx=intervals[ind][3];
   int j=next[ind];



   Node temp=solve(intervals,j ,s-1,next);
  Node take;
  take.score= temp.score+wt;
  take.idx=temp.idx;
  take.idx.push_back(idx);
  sort(begin(take.idx),end(take.idx));

Node result;
if(skip.score>take.score){
    result =skip;

}
else if (take.score>skip.score){
    result=take;

}

else {
    result=(skip.idx<take.idx)?skip:take;
}
return dp[ind][s]=result;
    }


int find(vector<vector<int>>& intervals,int target){
    int l=0;
    int n=intervals.size();
    int high=n-1;
    int ans=-1;
    while(l<=high){
        int mid=l+(high-l)/2;
        if(intervals[mid][0]>target){
     ans=mid;
     high=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}    


    vector<int> maximumWeight(vector<vector<int>>& intervals) {
   int n=intervals.size();
   for(int i=0;i<n;i++){
    intervals[i].push_back(i);
   }
   sort(intervals.begin(),intervals.end());
   vector<int> next(n);

  for(int i=0;i<n;i++){
    int end=intervals[i][1];
    next[i]=find(intervals,end);
  }
  dp.assign(n+1,vector<Node>(4+1));
 return solve(intervals,0,4,next).idx;



    }
};