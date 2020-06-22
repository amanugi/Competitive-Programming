 // Checking level of both values 
    int height(TreeNode* root, int value, int level){
        if(root == NULL)
            return NULL;
        
        
        if(root->val == value)
            return level;
        
        //Call on left subtree
        int lheight = height(root->left, value, level+1);
        if(lheight != 0)
            return lheight;
        
        //Else call on right subtree
        return height(root->right, value, level+1);
        
    }
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> q;
        q.push(root);
        
        bool isXExist = false;
        bool isYExist = false;
        
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            
            if(curr->val == x)
                isXExist = true;
            
            if(curr->val == y)
                isYExist = true;
            
            if(curr->left && curr->right){
                if(curr->left->val == x && curr->right->val == y)
                    return false;
                
                if(curr->left->val == y && curr->right->val == x)
                    return false;
            }
            
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
            
            if((isXExist && isYExist) && height(root, x, 0) == height(root, y, 0))
                return true;
        }
        
        return false;
    }
