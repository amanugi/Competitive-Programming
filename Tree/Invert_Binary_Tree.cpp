// Iterative Approach
TreeNode* invertTree(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            
            swap(curr->left, curr->right);
            
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        
        return root;
        
        // Rcursive Approach
        // TreeNode* right = invertTree(root->right);
        // TreeNode* left = invertTree(root->left);
        // root->right = left;
        // root->left = right;
        // return root;
    }
