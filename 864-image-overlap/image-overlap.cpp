class Solution {
public:
    int countt(vector<vector<int>>& img1, vector<vector<int>>& img2,int r_off,int c_off){
      
      int n=img1.size();
      int cnt=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int br=i+r_off;
            int bc=j+c_off;
          if(br<0||bc<0||br>=n||bc>=n){
            continue;
          }
          if(img1[i][j]==1&&img2[br][bc]==1){
            cnt++;
          }
        }
      }

return cnt;

    }

   
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n=img1.size();
        int maxx=0;
        for(int r_off=-n+1;r_off<n;r_off++){
            for(int c_off=-n+1;c_off<n;c_off++){
                    int count=countt(img1,img2,r_off,c_off);
                    maxx=max(maxx,count);

            }
        }
  return maxx;

    }
};