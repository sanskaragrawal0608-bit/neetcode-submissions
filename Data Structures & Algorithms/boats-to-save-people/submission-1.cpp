class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i=0;
        sort(people.begin(),people.end());
        int n =people.size();
        int cnt =0;
        int j =n-1;
        while(i<=j){
            if(people[i]+people[j]>limit){
                j--;
                cnt++;
            }
            else if(people[i]+people[j]<=limit){
                i++;
                j--;
                cnt++;
            }
            
        }
        return cnt;
    }
};