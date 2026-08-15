class Solution {
public:
    bool isPalindrome(string s) {
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }
        else if (!isalnum(s[i]))
        {
            continue;
        }
        else
        {
            ans += tolower(s[i]);
        }
    }
    string ans1=ans;
    reverse(ans.begin(),ans.end());
    if(ans==ans1) return true;
    return false;
    }
};
