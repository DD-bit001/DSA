class Solution {
public:
    int maxProduct(int n) {
vector<int> ans;
int k=n;
while(k>=1){
    ans.push_back(k%10);
    k=k/10;
}
if(ans.size()==1) return ans[0];
sort(ans.begin(),ans.end(),greater<int>());
return ans[0]*ans[1];

        
    }
};