lass Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        queue<TreeNode*>q;

        if(root == NULL) return ans;
        q.push(root);

        while(!q.empty()){
            // calculate the size.
            int size = q.size();
            vector<int>level;

            for(int i=0;i<size;i++){
                 TreeNode* temp = q.front();

                level.push_back(temp->val);
                 q.pop();

               if(temp->left != NULL)  q.push(temp->left);

               if(temp->right != NULL) q.push(temp->right);
            }
            ans.push_back(level);
        }


        for(int i=0;i<ans.size();i++){
            if(i%2 != 0){
                reverse(ans[i].begin(),ans[i].end());
            }
        }
        return ans;
    }
};