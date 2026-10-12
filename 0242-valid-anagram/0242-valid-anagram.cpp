class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>ana;
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            ana[s[i]-'a']++;
            ana[t[i]-'a']--;
        }

        for(auto it:ana){
            if(it.second>0){
                return false;
            }
        }
        return true;

    }
};