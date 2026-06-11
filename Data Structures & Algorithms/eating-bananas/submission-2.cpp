class Solution {
public:
bool ischeck(vector<int>& piles,int mid,int h){
    long long count =0;
        for(int i=0; i<piles.size(); i++){
                count+=ceil((double)piles[i]/mid);
        }
        if(count<=h){
            return true;
        }
        else{
            return false;
        }
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n =piles.size();
        int i=1;
        int sum=0;
        int j = *max_element(piles.begin(), piles.end());
       
        long long ans =j;
        while(i<=j){
            int mid =i+(j-i)/2;
            if(ischeck(piles,mid,h)){
                ans =mid;
                j =mid-1;
            }
            else{
                i =mid+1;
            }
        }
        return ans;
    }
};
