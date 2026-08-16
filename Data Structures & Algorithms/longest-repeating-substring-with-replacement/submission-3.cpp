class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int i = 0;
        int j = 0;

        vector<int> v(26, 0);

        int maxlen = 0;

        while (j < s.length())
        {
            v[s[j] - 'A']++;

            int maxfreq = 0;

            for (int x = 0; x < 26; x++)
            {
                maxfreq = max(maxfreq, v[x]);
            }

            int noofreplacement = (j - i + 1) - maxfreq;

            while (noofreplacement > k)
            {
                v[s[i] - 'A']--;
                i++;

                maxfreq = 0;

                for (int x = 0; x < 26; x++)
                {
                    maxfreq = max(maxfreq, v[x]);
                }

                noofreplacement = (j - i + 1) - maxfreq;
            }

            maxlen = max(maxlen, j - i + 1);

            j++;
        }

        return maxlen;
    }
};