class Solution {
public:
  int bs(vector<int>& numbers,int final,int start){
    int i =start;
    int j =numbers.size()-1;
    int x =-1;
    while(i<=j){
        int mid =i+(j-i)/2;
        if(numbers[mid]==final){
            x =mid+1;
            return x;
        }
        else if(numbers[mid]>final){
            j=mid-1;
        }
        else{
            i =mid+1;
        }
    }
    return x;
  }
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0; i<numbers.size(); i++){
                int final = target-numbers[i];
                int x =bs(numbers,final,i+1);
                if(x!=-1){
                    return {i+1,x};
                }
        }
        return {};
    }
};
