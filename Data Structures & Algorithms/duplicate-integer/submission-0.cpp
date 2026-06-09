class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        for(auto &it:mp){
            int x =it.first;
            int y =it.second;
            if(y>1){
                return true;
            }
        }
        return false;
    }
};