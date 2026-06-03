class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {

    vector<vector<int>>dp(str1.size()+1,vector<int>(str2.size()+1,0));

    for(int i=0;i<=str1.size();i++){
        dp[i][0]=0;
    }    
    for(int i=0;i<=str2.size();i++){
        dp[0][i]=0;
    }
    for(int i=1;i<=str1.size();i++){
        for(int j=1;j<=str2.size();j++){
          if(str1[i-1]==str2[j-1]){
            dp[i][j]=1+dp[i-1][j-1];
          }
          else{
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
          }
        }
    }
    string s="";
    int n=str1.size()+str2.size()-dp[str1.size()][str2.size()];
    for(int i=0;i<n;i++){
        s+='$';
    }
    int ind=n-1;
    int i=str1.size();
    int j=str2.size();
    while(i>0&&j>0){
        if(str1[i-1]==str2[j-1]){
   s[ind]=str1[i-1];
   ind--;
   i--;
   j--;
        }
        else if(dp[i-1][j]>dp[i][j-1]){
            s[ind--]=str1[i-1];
            i--;
        }
        else{
            s[ind--]=str2[j-1];
            j--;
        }
    }
    while(i > 0){
    s[ind--] = str1[i-1];
    i--;
}

while(j > 0){
    s[ind--] = str2[j-1];
    j--;
}

return s;
 
    }
};