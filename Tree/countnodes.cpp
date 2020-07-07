#include<bits/stdc++.h>
using namespace std;

int countNodes(TreeNode* root) {
        if(!root)
            return 0;
        
        queue<TreeNode*> q;
        
        int cnt = 1;   // for root 
        
        q.push(root);
        
        while(!q.empty()){
            auto curr = q.front();
            q.pop();
            
            if(curr->left){
                cnt++;
                q.push(curr->left);
            }
            
            if(curr->right){
                cnt++;
                q.push(curr->right);
            }
        }
        return cnt;
    }
