class Solution {
public:
    long long gcdSum(vector<int>& nums) {
     
     vector<int> prefixGod;
     int maxx=0;
     for(int i=0;i<nums.size();i++){
      maxx=max(maxx,nums[i]);
      prefixGod.push_back(gcd(maxx,nums[i]));
     }
sort(prefixGod.begin(),prefixGod.end());
int i=0;
int j=nums.size()-1;
long long sum=0;
while(i<j){
sum+=gcd(prefixGod[i],prefixGod[j]);
i++;
j--;
}

        return sum;
    }
};