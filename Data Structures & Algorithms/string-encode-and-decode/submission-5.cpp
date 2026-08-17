class Solution {
public:

    string encode(vector<string>& strs) {
if(strs.size()==0) return{};
else{
    string ans="";
    for(int i=0;i<strs.size();i++){
        ans+=to_string(strs[i].length());
        ans+='#';
        ans+=strs[i];
    }
    return ans;
}
    }

    vector<string> decode(string s) {
        vector<string>ans;
        
if(s.empty()) return{};
int i=0;
while(i<s.length()){
    int len=0;
    while(s[i]!='#'){
        len=(len*10)+(s[i]-'0');
        i++;
    }
    string temp="";
    i+=1;
    for(int j=0;j<len;j++){
temp+=s[i];
i++;
    }
    ans.push_back(temp);
}
return ans;
    }
};
