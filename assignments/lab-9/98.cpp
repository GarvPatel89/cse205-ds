class Solution {
public:
  void LNR(TreeNode* root, vector<int>& vals) {
    if (root == nullptr) {
      return;
    }
    LNR(root->left, vals);
    vals.push_back(root->val);
    LNR(root->right, vals);
  }
  bool isValidBST(TreeNode* root) {
    vector<int> vals;
    LNR(root, vals);
    for (int i = 1; i < vals.size(); ++i) {
      if (vals[i] <= vals[i - 1]) {
        return false;
      }
    }
    return true;
  }
};