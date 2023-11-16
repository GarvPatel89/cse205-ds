class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if (preorder.size() == 0) return nullptr;
        stack<TreeNode*> st;
        TreeNode* root = new TreeNode (preorder[0]);
        st.push(root);
        for (int i=1; i<preorder.size(); i++) {
            int val = preorder[i];
            TreeNode* node = new TreeNode (val);
            TreeNode* temp = nullptr;
            while (!st.empty() && val > (st.top()->val)) {
                temp = st.top();
                st.pop();
            }
            if (temp) temp->right = node;
            else (st.top()->left) = node;
            st.push(node);
        }
        return root;
    }
};