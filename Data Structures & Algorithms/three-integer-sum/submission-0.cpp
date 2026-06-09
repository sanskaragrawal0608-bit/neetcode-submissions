class Solution {
public:
int bs(vector<int>& nums,int final,int start){
int i =start;
int j =nums.size()-1;
int x =-1;
while(i<=j){
    int mid =i+(j-i)/2;
    if(nums[mid]==final){
        x =mid;
        return x;
    }
    else if(nums[mid]<final){
        i =mid+1;
    }
    else{
        j =mid-1;
    }
}
return x;
}
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target=0;
        sort(nums.begin(), nums.end());        // Line 1 - sabse upar
vector<vector<int>> twosum;            // Line 2 - (3) hatao
   // Line 3 - duplicate skip
 // Line 4 - duplicate skip
          
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            for(int j =i+1; j<n; j++){
                if(j > i+1 && nums[j] == nums[j-1]) continue;
                int final = target-(nums[i]+nums[j]);
                int x =bs(nums,final,j+1);
                if(x!=-1){
                   twosum.push_back({nums[i], nums[j], nums[x]});
                }
            }
        }
        return twosum;
    }
};
