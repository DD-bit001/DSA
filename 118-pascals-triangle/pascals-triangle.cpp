class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        ans[0]={1};
        if(numRows>1)
        ans[1]={1,1};
        for(int i=2;i<numRows;i++){
           vector<int>v(i+1);
           vector<int>temp=ans[i-1];
           v[0]=1;
           v[i]=1;
           for(int j=1;j<i;j++){
            v[j]=temp[j-1]+temp[j];
           }
           ans[i]=v;
        }
        return ans;
    }
};