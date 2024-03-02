/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root, TreeNode*& temp, TreeNode* p) {
    if (root == nullptr) {
        return;
    }
    inorder(root->left, temp, p);
    // Only update temp if it is null or root->val is closer to p->val than temp->val
    if (root->val > p->val && (temp == nullptr || root->val < temp->val)) {
        temp = root;
    }
    inorder(root->right, temp, p);
}
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        TreeNode*temp = nullptr; 
        inorder(root, temp, p);
        return temp; 
    }
};