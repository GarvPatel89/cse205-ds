class Solution {
public:
    map<int, map<int, vector<int>>> mp;

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        dfs(root, 0, 0);
        vector<vector<int>> ans;

        for (auto i : mp) {
            vector<int> res;
            for (auto j : i.second) {
                sort(j.second.begin(), j.second.end());
                res.insert(res.end(), j.second.begin(), j.second.end());
            }
            ans.push_back(res);
        }
        return ans;
    }
    
    void dfs(TreeNode* root, int hd, int level) {
        if (root) {
            mp[hd][level].push_back(root -> val);
            dfs(root -> left, hd - 1, level + 1);
            dfs(root -> right, hd + 1, level + 1);
        }
    }
};