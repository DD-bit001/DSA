class Solution {
    private:
void solve(string &s,string &curr, vector<string> &ans,vector<int> &used){
    if(curr.size()==s.size()){
        ans.push_back(curr);
        return;
    }
    for(int i=0;i<s.size();i++){

    if(!used[i]){
        curr+=s[i];
     used[i]=1;
    
    
        solve(s, curr, ans,used);

        curr.pop_back();
        used[i] = 0;
    }
    }
}

public:

    string lexGreaterPermutation(string s, string target) {
        
    //    string curr="";
    //    vector<string> ans;
    //     vector<int> used(s.size(),0);
    //     solve(s,curr,ans,used);
    // sort(ans.begin(),ans.end());
    // for(int i=0;i<ans.size();i++){
    //     if(ans[i]>target){
    //         return ans[i];
    //     }
    // }
    // sort(s.begin(),s.end());
    // do{
    //     if(s>target){
    //         return s;
    //     }
    // }
 // while(next_permutation(s.begin(),s.end()));

map<char,int> m;
for(int i=0;i<s.size();i++){
    m[s[i]]++;
}
string curr="";
int i=0;
for(;i<target.size();i++){
    if(m[target[i]]>0){
        curr+=target[i];
        m[target[i]]--;
        if (m[target[i]] == 0) {
                    m.erase(target[i]);
                }
    }
    else {
        break;
    }

}
 if (i < target.size()) {
auto it = m.upper_bound(target[i]);

while (it != m.end() && it->second == 0) {
    it++;
}
if(it!=m.end()){
string ans=curr;

ans+=it->first;
m[it->first]--;
for(auto &p: m){
    ans+=string(p.second,p.first);
}
return ans;
}
 }
while(!curr.empty()){
char last=curr.back();
curr.pop_back();

int pos=curr.size();
m[last]++;

auto it = m.upper_bound(target[pos]);

while (it != m.end() && it->second == 0) {
    it++;
}
if(it!=m.end()){
string ans=curr;

ans+=it->first;
m[it->first]--;
for(auto &p: m){
    ans+=string(p.second,p.first);
}
return ans;
}

}

  return "";
    }
};