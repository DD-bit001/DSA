class Solution {
    bool find(vector<int>& nums,int s1, int s2,int start, int end,int turn){

        if(start>end){
  return s1>=s2;

        }
        if(turn)
        return (find(nums,s1+nums[start],s2,start+1,end,0))||(find(nums,s1+nums[end],s2,start,end-1,0));
        if(!turn)
        return (find(nums,s1,s2+nums[start],start+1,end,1)) &&(find(nums,s1,s2+nums[end],start,end-1,1));
  
return true;
    }
public:
    bool predictTheWinner(vector<int>& nums) {
        int s1=0;
        int s2=0;
        int start =0;
        int end=nums.size()-1;
   return find(nums,0,0,start,end,1);
        
    }
};