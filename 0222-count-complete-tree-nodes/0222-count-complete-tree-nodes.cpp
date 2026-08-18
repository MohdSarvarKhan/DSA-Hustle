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

int rheight(TreeNode* root){
        TreeNode* temp = root;

        int rh = 0;
        while(temp) {
            rh++;
            temp = temp->right;
        }     
        return rh;  
    }
    int lheight(TreeNode* root){
        TreeNode* temp = root;
        int lh = 0;
        while(temp){
            lh++;
            temp = temp->left;
        }

        return lh;   
    }

    int countNodes(TreeNode* root) {
        if(!root){
            return 0;
        }


        int lh = lheight(root);
        int rh = rheight(root);

        int ans = 0;
        if(lh == rh){
            return (1 << lh) - 1;
        }

        else{
            return 1 + countNodes(root->left) +
            countNodes(root->right);
        }  
    }
};