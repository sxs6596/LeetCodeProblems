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
    void KthSmallestHelper(TreeNode* root, int& k, int& ans){
        if(root == nullptr || k == 0){
            return; 
        }
        
        KthSmallestHelper(root->left, k, ans);
        
        // Decrement k after visiting a node. If k becomes 0, we found our answer.
        k--;
        if(k == 0){
            ans = root->val;
            return; // No need to proceed further once we've found the kth smallest element.
        }
        
        KthSmallestHelper(root->right, k, ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans = -1; 
        KthSmallestHelper(root, k, ans);
        return ans; 
    }
};