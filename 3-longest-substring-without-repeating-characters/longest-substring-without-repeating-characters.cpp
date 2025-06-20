class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0;
        unordered_set<char> charset;
        int left = 0;
        for(int right = 0; right < s.size();right++){
            while(charset.find(s[right]) != charset.end()){

            charset.erase(s[left]);
            left++;
            }

        charset.insert(s[right]);
        maxlen = max(maxlen , right -left + 1);
        }
        return maxlen;
    }
};