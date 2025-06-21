class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
       unordered_map<int , int> mpp;
       mpp[0] = 1;
       int odd = 0 ; int count = 0;
       for(int i=0 ; i<nums.size();i++){
        if(nums[i] % 2 != 0){
            odd++;
        }
        if(mpp.find(odd-k) != mpp.end()){
            count += mpp[odd-k];
        }
        mpp[odd]++;
       }
       return count;
        
        
    }
};