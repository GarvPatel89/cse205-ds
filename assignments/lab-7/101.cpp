class Solution {
public:
    bool isTreeSymmetric(TreeNode* r1, TreeNode* r2){
        if(r1 == NULL && r2 == NULL){
            return true;
        }
        if(r1 != NULL && r2 == NULL){
            return false;
        }
        if(r1 == NULL && r2 != NULL){
            return false;
        }
        if(r1->val != r2->val){
            return false;
        }
        return isTreeSymmetric(r1->left,r2->right) && isTreeSymmetric(r1->right,r2->left);
    }    
public:
    bool isSymmetric(TreeNode* root) {
        return isTreeSymmetric(root->left,root->right);
    }
};