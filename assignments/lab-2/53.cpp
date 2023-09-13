class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsub = nums[0];
        int currsub = nums[0];

        for(int i =1; i < nums.size(); i++){
            currsub = max(nums[i], currsub + nums[i]);
            maxsub = max(maxsub , currsub);
        }
        return maxsub;
    }
};