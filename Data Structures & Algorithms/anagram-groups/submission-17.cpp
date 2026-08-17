class Solution {
public:
string makepattern(string s){
    vector<int>freq(26,0);
    for(int i=0;i<s.length();i++){
        freq[s[i]-'a']++;
    }
    string pattern="";
    for(int i:freq){
        pattern+=to_string(i);
        pattern+='#';
    }
    return pattern;
}
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++){
   string p=makepattern(strs[i]);

mp[p].push_back(strs[i]);
        }
        for(auto it:mp){
vector<string>tem=it.second;
ans.push_back(tem);        }
        return ans;
    }
};
