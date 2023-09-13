class Solution {
public:
    void solve(int val, int size, int k, int n, vector<int> &temp,
    vector<vector<int>> &ans){
        if(size <= 0){
            if(temp.size() == k){
                ans.push_back(temp);
            }
            return;
        }
        if(val > n)
        return;

        temp.push_back(val);
        solve(val+1, size-1, k, n, temp, ans);
        temp.pop_back();

        solve(val+1, size, k, n, temp, ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(1,k,k,n,temp,ans);
        return ans;
    }
};