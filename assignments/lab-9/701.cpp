class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp = new TreeNode(val);
        if(root==NULL) return temp;
        TreeNode* head = root;
        while(true)
        {
            if(val > root->val)
            {
                if(root->right) root = root->right;
                else
                {
                    root->right = temp;
                    break;
                } 
            }
            else
            {
                if(root->left) root= root->left;
                else 
                {
                    root->left = temp;
                    break;
                }
            }
        }
        return head;
    }
};