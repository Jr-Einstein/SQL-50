class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> runsum;
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
            runsum.push_back(sum);
        }

        nums = runsum;
        return nums;
    }
};