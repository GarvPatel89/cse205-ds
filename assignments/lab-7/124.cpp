class Solution {
private:
    int findMaxPathSum(TreeNode* root, int &maxi){
        if(root==NULL){
            return 0;
        }
        int left = max(0,findMaxPathSum(root->left,maxi));
        int right = max(0,findMaxPathSum(root->right,maxi));
        maxi = max(maxi,(left+right)+root->val);
        return max(left,right)+root->val;
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        findMaxPathSum(root,maxi);
        return maxi;
    }
};