class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        int k=0;
        int n=nums.size();
          int temp= nums[0];
          sort(nums.begin(),nums.end());
          while(start<=end){
            if(nums[mid]==temp){
                k=mid;
                break;
            }
            else if (nums[mid]>temp) end=mid-1;
            else if(nums[mid]<temp ) start=mid+1;
            mid=start+(end-start)/2;
                      }
            start=0;
            end=nums.size()-1;
            mid=start+(end-start)/2;
            while(start<=end){
            if(nums[mid]==target){
               return (mid-k+n)%n;
            }
            else if (nums[mid]>target) end=mid-1;
            else if(nums[mid]<target ) start=mid+1;
            mid=start+(end-start)/2;
                      }

        return -1;
    }
};