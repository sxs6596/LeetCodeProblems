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
      if(dfsHeight(root)!=-1){
          return true;
      }else{
          return false;
      }
        
    }
    int dfsHeight(TreeNode* root){ 
     // base case. 
        if(root == nullptr){
            return 0;
        }
        int lh = dfsHeight(root->left);
        if(lh == -1) return -1;
        int rh = dfsHeight(root->right);
        if(rh == -1) return -1; 
        if(abs(lh-rh)>1 ){
            return -1;
        }else{
           return 1+max(lh, rh);    
        }
    }
};