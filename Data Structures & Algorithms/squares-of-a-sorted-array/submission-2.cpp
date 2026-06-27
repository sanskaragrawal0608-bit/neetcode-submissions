class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n =nums.size();
        vector<int>result(n);
        int i =0;
        int j =n-1;
        int k =n-1;
        while(i<=j){
            int x =nums[i]*nums[i];
            int y =nums[j]*nums[j];
            if(x<y){
                    result[k]= y;
                    j--;
                    k--;
            }
            else{
                    result[k] =x;
                    i++;
                    k--;
            }
        }
        return result;
    }
};