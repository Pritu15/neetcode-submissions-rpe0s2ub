class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> flags(26);
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            flags[s[i]-97]++;
            flags[t[i]-97]--;
        }
        for(int i=0;i<26;i++){
            if(flags[i]!=0){
                return false;
            }
        }
        return true;
        
    }
};