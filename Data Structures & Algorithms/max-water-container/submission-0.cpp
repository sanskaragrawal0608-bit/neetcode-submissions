class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i=0;
        int j =n-1;
        int area =INT_MIN;
        while(i<j){
int length = j-i;
int height =min(heights[i],heights[j]);
            area = max(area,length*height);
            if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
           
        }
        return area;
    }
};
