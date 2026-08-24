class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> st;
        if(s.length()!=t.length()){
            return false;
        }

       int n= s.length();
        for(int i=0;i<n;i++){
           st[s[i]]++;
        }
        for(int i=0;i<n;i++){
            st[t[i]]--;
        }

        for(auto it:st){
            if(it.second!=0){
                return false;
            }
        }
   return true;
    }
};
