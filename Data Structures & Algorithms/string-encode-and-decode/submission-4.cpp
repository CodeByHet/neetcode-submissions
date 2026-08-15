class Solution {
public:
vector<int>visited;
    string encode(vector<string>& res) {
      if(res.size()==0){
        return {};
      }
      string ans = "";
    for (int i = 0; i < res.size(); i++)
    {
        ans += to_string(res[i].length());
        ans += '#';

        ans += res[i];
    }
    return ans;
    }
        vector<string> decode(string s) {
           string temp = " ";
    int i = 0;
    int len = 0;
    vector<string> ans;
    while (i < s.length())
    {

        int len = 0;

        while (i < s.length() && s[i] != '#')
        {
            len = len * 10 + (s[i] - '0');
            i++;
        }

        i++;

        string temp = "";

        for (int j = 0; j < len; j++)
        {
            temp += s[i];
            i++;
        }

        ans.push_back(temp);
    }
    return ans;
    }
};
