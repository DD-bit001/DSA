class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        map<char, int> m;

        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

        for(char ch : row1) m[ch] = 1;
        for(char ch : row2) m[ch] = 2;
        for(char ch : row3) m[ch] = 3;

        vector<string> ans;

        for(string word : words) {
            int row = m[tolower(word[0])];
            bool flag = true;

            for(char ch : word) {
                if(m[tolower(ch)] != row) {
                    flag = false;
                    break;
                }
            }

            if(flag) {
                ans.push_back(word);
            }
        }

        return ans;
    }
};