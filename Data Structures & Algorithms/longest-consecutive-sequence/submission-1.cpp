class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int prevsmall = INT_MIN;
        int length=0;
        int count;
        for(int i=0; i<n; i++){
                if(nums[i]-1==prevsmall){
                    count=count+1;
                    prevsmall =nums[i];
                }
                else if(nums[i]!=prevsmall){
                    count=1;
                    prevsmall =nums[i];

                }
                length = max(length,count);
        }
        return length;
    }
};
