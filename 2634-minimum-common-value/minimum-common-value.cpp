class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int minn=-1;
        while(i<nums1.size()&&j<nums2.size()){
        if(nums1[i]==nums2[j]){
            minn=nums1[i];
            return minn;
        }
        if(nums1[i]>nums2[j]){
            j++;
        }
        else {
            i++;
        }
    }
    return minn;
    }
};