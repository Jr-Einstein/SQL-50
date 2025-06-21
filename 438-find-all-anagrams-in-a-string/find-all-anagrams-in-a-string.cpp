class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int k = p.size();
        vector<int> temp;

        map<char , int> ptt;
        map<char , int> mpp;

        for(char c : p ){
            ptt[c]++;
        }

        int right = 0;
        int left = 0;
        while(right < n){
            mpp[s[right]]++;
            if(right - left + 1 < k){
                right++;
            }
            else if( right - left + 1 == k){
                if(ptt == mpp){
                    temp.push_back(left);
                }
                mpp[s[left]]--;
                if(mpp[s[left]]==0){
                    mpp.erase(s[left]);
                }
                left++;
                right++;
            }
        }
        return temp;
    }
};