class Solution {
public: 
int bs(vector<int>& numbers,int final,int start){
int low =start;
int high =numbers.size()-1;
int x=-1;
while(low<=high){
    int mid =low+(high-low)/2;
    if(numbers[mid]==final){
        x = mid+1;
        return x;
    }
    else if(numbers[mid]<final){
            low =mid+1;
    }
    else{
            high =mid-1;
    }
}
return x;
}
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>twosum(2);
        int n = numbers.size();
        for(int i=0; i<n; i++){
            int final =target-numbers[i];
            int x = bs(numbers,final,i+1);
            if(x!=-1){
                    twosum = {i+1,x};
            }
        

        }
        return twosum;
    }
};
