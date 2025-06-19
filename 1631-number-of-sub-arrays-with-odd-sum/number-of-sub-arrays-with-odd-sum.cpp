class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long oddcnt = 0;
        int prefixsum = 0;
        for(int i=0;i<arr.size();i++){
            prefixsum += arr[i];
            oddcnt += prefixsum %2;
        }
            oddcnt += (arr.size() - oddcnt)* oddcnt;
            return oddcnt% 1'000'000'007;
        
    }
};