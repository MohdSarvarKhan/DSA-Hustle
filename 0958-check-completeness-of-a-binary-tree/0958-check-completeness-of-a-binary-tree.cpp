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

    bool checkCompleteBtree(TreeNode * root,int index,int n){
      if(!root){
          return true;
      }
      
      if(index >= n) return false;
      
      return checkCompleteBtree(root->left,2 * index + 1,n) && checkCompleteBtree(root->right,2 * index + 2,n);
  }
  
  
  
   int countNodes(TreeNode *root){
       
       if(!root){
           return 0;
       }
       
       return 1 + countNodes(root->left) + countNodes(root->right);
   }

    bool isCompleteTree(TreeNode* root) {
        int count = countNodes(root);
        int index= 0;
        return  checkCompleteBtree(root,index,count);
    }
};