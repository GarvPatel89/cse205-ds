class Solution {
private:
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        int ans = max(left,right)+1;
        return ans;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int opt1=diameterOfBinaryTree(root->left);
        int opt2=diameterOfBinaryTree(root->right);
        int opt3=height(root->left)+height(root->right);
        int ans = max(opt1,max(opt2,opt3));
        return ans;
    }
};