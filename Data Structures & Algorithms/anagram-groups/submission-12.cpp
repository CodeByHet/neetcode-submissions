class Solution {
public:
string makepattern(string &s)
{
    vector<int> freq(26, 0);

    for (char c : s)
    {
        freq[c - 'a']++;
    }

    string ans = "";

    for (int x : freq)
    {
        ans += "#" + to_string(x);
    }

    return ans;
}
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++){
            string str=makepattern(strs[i]);
            mp[str].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto &it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
