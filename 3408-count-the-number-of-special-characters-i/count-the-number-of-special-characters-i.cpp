class Solution {
public:
    int numberOfSpecialChars(string word) {
    map<char , int> m;
    for(int i=0;i<word.size();i++){
        m[word[i]]++;
    }
    int cnt=0;
    for(int i=65;i<=90;i++){
        if((m.find(char(i))!=m.end())&&m.find(char(i+32))!=m.end()){
    cnt++;
        }
    }   
    return cnt;

    }
};