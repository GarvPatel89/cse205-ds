class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int ans = 0, n = nums.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++)
            mp[nums[i]]++;
        int actSum = (n*(n+1)) / 2, sum = 0;
        for(auto x : mp){
            if(x.second > 1)
                ans = x.first;
            sum += x.first;
        }
        return {ans, actSum - sum};
    }
};