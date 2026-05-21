class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        int n1=arr2.size();
        unordered_set<string> s1;
      
        for(int i=0;i<n;i++){
            string s=to_string(arr1[i]);
            string temp="";
          for(int j=0;j<s.size();j++){
            temp+=s[j];
            s1.insert(temp);
          }
        }
                int cnt=0;
      
        for(int i=0;i<n1;i++){
            string s=to_string(arr2[i]);
            string temp="";
          for(int j=0;j<s.size();j++){
            temp+=s[j];
             if (s1.find(temp) != s1.end()) {
                    cnt= max(cnt, (int)temp.size());
                }
          }
        }

              


return cnt;

    }
};