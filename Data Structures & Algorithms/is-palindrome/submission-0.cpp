class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> t;
    for(int i=0;i<s.length();i++){
        if(isalnum(s[i])){
           t.push_back(tolower(s[i]));
        }
    }

    int n=t.size();
    for(int i=0;i<n/2;i++){
          if(t[i]!=t[n-1-i]){
            return false;
          }
    }


return true;
    

    }
};
