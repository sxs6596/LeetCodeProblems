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
    void DFS(TreeNode* root, vector<int>& nums) {
        if (root == nullptr) {
            return;
        }
        DFS(root->left, nums);
        nums.push_back(root->val);
        DFS(root->right, nums);
    }
    
    void treeSolve(TreeNode* root, vector<int>& nums, int& i) {
        if (root == nullptr) {
            return;
        }
        treeSolve(root->left, nums, i);
        
        // Update the node's value with the correct value from the sorted array.
        root->val = nums[i++];
        
        treeSolve(root->right, nums, i);
    }
    
    void recoverTree(TreeNode* root) {
        vector<int> nums; 
        DFS(root, nums); // Step 1: Perform in-order traversal to collect node values.
        sort(nums.begin(), nums.end()); // Step 2: Sort the collected values.
        int i = 0;
        treeSolve(root, nums, i); // Step 3: Reassign sorted values to the nodes.
    }
};