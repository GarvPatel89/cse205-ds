class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        multiset<int> mset;
        vector<int> ans;
        for (int i=0; i<nums.size(); i++){
            mset.insert(nums[i]);
        }
        while (mset.size()>k)mset.erase(mset.begin());
        for (int i=0; i<nums.size(); i++){
            auto it= mset.find(nums[i]);
            if (it!=mset.end()){
                ans.push_back(nums[i]);
                mset.erase(it);
            }
        }
        return ans;
    }
};