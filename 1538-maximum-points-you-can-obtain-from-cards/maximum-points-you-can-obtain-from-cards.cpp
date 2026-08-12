class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0;
        int r=cardPoints.size()-1;
        int rsum=0;
        for(int i=0;i<k;i++) lsum+=cardPoints[i];
int msum=lsum;
        for(int i=k-1;i>=0;i--,r--){
            lsum-=cardPoints[i];
        rsum+=cardPoints[r];
msum=max(msum,lsum+rsum);
        }
return msum;
        
    }
};