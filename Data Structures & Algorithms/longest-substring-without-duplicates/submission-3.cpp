class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int j = 0;
    int k = 0;
    int maxlen = 0;
    unordered_map<int, int> mp;
    while (j != s.length())
    {
        mp[s[j]]++;
        while (mp[s[j]] > 1)
        {
            mp[s[k]]--;
            if (mp[s[k]] == 0)
            {
                mp.erase(s[k]);
            }
            k++;
        }
        maxlen = max(maxlen, j - k + 1);
        j++;
    }
    return maxlen;
    }
};
