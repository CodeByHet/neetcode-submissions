class Solution {
public:
    int characterReplacement(string st, int k) {
         int i = 0;
    int j = 0;
    int maxlen = INT_MIN;
    vector<int> str(26, 0);
    int maxfreq = INT_MIN;
    while (j != st.length())
    {
        str[st[j] - 'A']++;
        maxfreq = max(maxfreq, str[st[j] - 'A']);

        if (((j - i + 1) - maxfreq) <= k)
        {
            maxlen = max(maxlen, j - i + 1);
        }
        else
        {
            while (((j - i + 1) - maxfreq) > k)
            {
                str[st[i]-'A']--;
                i++;
            }
        }
        j++;
    }
    return maxlen;
    }
};
