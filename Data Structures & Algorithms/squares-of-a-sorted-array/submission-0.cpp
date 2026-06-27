class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       
        int n =nums.size();
         vector<int>result(n);
        for(int i=0; i<n; i++){
                int x = nums[i]*nums[i];
                result[i] =x;
        }
        sort(result.begin(),result.end());
        return result;
    }
};