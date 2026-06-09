class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int left = 0;
unordered_map<char, int> mp;  // char -> frequency
int len = 0;
int n = s.length();
for(int right = 0; right < n; right++) {
    mp[s[right]]++;
    
    while(mp[s[right]] > 1) {  // duplicate hai
        mp[s[left]]--;          // left ka freq kam karo
        left++;
    }
    
    len = max(len, right - left + 1);
}
return len;

    }
};
