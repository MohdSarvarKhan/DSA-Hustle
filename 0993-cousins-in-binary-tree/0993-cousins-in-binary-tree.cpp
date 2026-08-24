/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        if(!root || x == y)
            return false;
        

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int len = q.size();

            bool foundX = false, foundY = false;

            while(len--){
                TreeNode* curr = q.front();
                q.pop();

                if(curr->val == x)
                    foundX = true;
                
                if(curr->val == y)
                    foundY = true;
                

            if (curr->left && curr->right) {
               int left = curr->left->val;
               int right = curr->right->val;

               if ((left == x && right == y) ||
                   (left == y && right == x))
                   return false;
           }

           if(curr->left)
            q.push(curr->left);
           
           if(curr->right)
            q.push(curr->right);
            }

        if(foundX && foundY)
            return true;
        
        if(foundX || foundY)
            return false;
        }

        return false;
        
    }
};