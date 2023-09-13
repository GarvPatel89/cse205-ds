class Solution {
public:
    void helper(vector<int> &v, vector<vector<int>> &ans,int target, int kya, vector<int> temp){
        if(target < 0)
        return;

        if(kya == v.size()){
            if(target == 0){
                ans.push_back(temp);
            }
            return;
        }
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        temp.push_back(v[kya]);
        helper(v, ans, target -v[kya], kya, temp);
        temp.pop_back();
        helper(v, ans, target, kya+1, temp);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(candidates, ans, target, 0, temp);
        return ans;
    }
};