class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        vector<int> ans;
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]+carry<=9){
           ans.push_back(digits[i]+carry);
          if(digits[i]+carry<=9) carry=0;
            }
            else{
                int num=digits[i]+carry;
                ans.push_back(num%10);
                carry=num/10;
            }

        }
        if(carry!=0){
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};