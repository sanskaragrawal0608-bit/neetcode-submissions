class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=0;
        int j =0;
        int n = s.length();
        int m =t.length();
         if(n != m) {
            return false;
        }
        while(i<n && j<m){
                if(s[i]!=t[j]){
                    return false;
                }
                else{
                    i++;
                    j++;
                }
        }

        return true;
    }
};
