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
    bool isValidBST(TreeNode* root, long minVal, long maxVal){
//         base case 
        if(root == nullptr){
            return true; 
        }
//         recursive call + sw 
        if(root->val >= maxVal || root->val <= minVal){
            return false; 
        }
//      recursive call 
        return isValidBST(root->left, minVal, root->val) && isValidBST(root->right, root->val, maxVal); 
    }
    bool isValidBST(TreeNode* root) {
        long minVal = LONG_MIN; 
        long maxVal = LONG_MAX; 
        return isValidBST(root, minVal, maxVal); 
    }
};