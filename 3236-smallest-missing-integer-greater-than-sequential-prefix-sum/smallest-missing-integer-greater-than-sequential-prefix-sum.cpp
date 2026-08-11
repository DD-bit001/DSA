class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int s= nums[0];
    int i=1;
    int n=nums.size();
    if(n==1) return nums[0]+1;
    for(i;i<n;i++){
        if(nums[i]==nums[i-1]+1){
            s+=nums[i];
        }
        else {
            break;
        }
    }
    sort(nums.begin()+i,nums.end());
    int num =s;
    i=0;
    for(i;i<n;i++){
 if(nums[i]==num) num++ ;
    }  
    return num;
    }
};