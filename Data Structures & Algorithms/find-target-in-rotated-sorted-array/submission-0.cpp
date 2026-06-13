class Solution {
public:

int bs(int i,int j,vector<int>& nums, int target,int n){
    int idx =-1;
while(i<=j){
    int mid=i+(j-i)/2;
    if(nums[mid]==target){
        idx = mid;
        return idx;
    }
    else if(nums[mid]<target){
        i =mid+1;
    }
    else{
        j =mid-1;
    }
}
return idx;
}
int findnums(vector<int>& nums, int target, int n){
    int pivot_index =0;
        int i=0;
        int j =n-1;
       
        while(i<j){
            int mid =i+(j-i)/2;
            if(nums[mid]>nums[j]){
                i =mid+1;
            }
            else{
                j =mid;
                pivot_index =j;
                
            }
        }
        return j;
}
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot_index =findnums(nums,target,n);
        int idx =bs(0,pivot_index-1,nums,target,n);
        if(idx!=-1){
            return idx;
        }
        idx =bs(pivot_index,n-1,nums,target,n);
        return idx;
    }
};
