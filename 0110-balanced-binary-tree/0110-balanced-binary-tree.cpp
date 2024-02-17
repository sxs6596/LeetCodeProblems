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
    bool isBalanced(TreeNode* root) {
        // return true if balanced 
          if(check(root)!=-1){
              return true;
          } 
        // return false if not balanced 
        else{
            return false; 
        }
    }
    
    int check(TreeNode* root){
        // base case 
        if(root == nullptr){
            return 0; 
        }
        int lh = check(root->left);
        if(lh == -1) return -1; 
        int rh = check(root->right);
        if(rh == -1) return -1; 
        // check the absolute difference 
        if(abs(lh - rh)>1) return -1; 
        else{
            return 1+max(lh,rh); 
        }
    }
};