class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> post;
        vector<int> neg;

        for(int i=0 ; i<nums.size();i++){
            if(nums[i] > 0){
                post.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
        }

        for(int i=0;i<nums.size(); i++){
            if(i%2 == 0){
                nums[i] = post[i/2];
            }else{
                nums[i] = neg[i/2];
            }
        }
        return nums;
    }
};