class Solution
{
public:
    bool isSubset(vector<int> &a, vector<int> &b)
    {
        for (int i = 0; i < 128; i++)
        {
            if (a[i] > b[i])
                return false;
        }
        return true;
    }

    string minWindow(string s, string t)
    {
        if (t.length() > s.length())
            return "";

        vector<int> freq_t(128, 0);

        for (int i = 0; i < t.length(); i++)
        {
            freq_t[t[i]]++;
        }

        vector<int> t1(128, 0);

        int i = 0;
        int j = 0;

        int minlength = INT_MAX;
        int st = -1;
        int end = -1;

        while (j < s.length())
        {
            t1[s[j]]++;

            while (isSubset(freq_t, t1))
            {
                if (j - i + 1 < minlength)
                {
                    minlength = j - i + 1;
                    st = i;
                    end = j;
                }

                t1[s[i]]--;
                i++;
            }

            j++;
        }

        if (st == -1)
            return "";

        return s.substr(st, minlength);
    }
};