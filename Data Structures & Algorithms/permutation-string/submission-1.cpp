class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
        return 0;
    }
    else{
vector<int>s11(26,0);
        for(int i=0;i<s1.length();i++){
s11[s1[i]-'a']++;
        }   
    
        int p=0;
        int q=0;
        int sum_s2=0;
        vector<int>s22(26,0);
        while(q!=s2.length()){
            s22[s2[q]-'a']++;
            if((q-p+1)==s1.length()){
                if(s11==s22){
                    return true;
                }else{
                    s22[s2[p]-'a']--;
                    p++;
                }
            }
            q++;
        }
return false;
    }
    }  
};
