class Solution {
public:
    string mergeAlternately(string word1, string word2) {
          string result ="";
         
          int i=0;
          int j =0;
          int n =word1.length();
          int m =word2.length();
          while(i<n && j<m){
           result+=word1[i++];
           result+=word2[j++];
          }
          while(i<n){
result+=word1[i++];
          }
          while(j<m){
 result+=word2[j++];
          }
          return result;
    }
};