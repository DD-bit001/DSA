class Solution {
    private:
    string convert2binary(int n){
            if (n == 0) return "0";
        string ans="";
        while(n!=0){
            if(n%2==1) ans+="1";
            else{
                ans+="0";
            }
            n=n/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
public:
    string convertDateToBinary(string date) {
        string ans="";
        int n=0;
        for(int i=0;i<date.size();i++){
         if(date[i]=='-'){
            ans+=convert2binary(n);
            ans+="-";
            n=0;
         }
         else{
        n=(date[i]-'0')+n*10;
         }
        }

        ans += convert2binary(n);

       return ans; 
    }
};