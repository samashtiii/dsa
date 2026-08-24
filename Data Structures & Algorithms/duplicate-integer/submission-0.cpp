class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        map<int,int>m;
        for (auto it:nums){
            m[it]++;
        }
        for(auto it:nums){
        if(m[it] > 1){
             return true;
        }
        }
        return false;

        
    }
};