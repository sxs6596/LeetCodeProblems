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
    vector<vector<int>> zigzaghelper(TreeNode* root, bool flag) {
    vector<vector<int>> ans;
    if (root == nullptr) {
        return ans;
    }

    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        int levelSize = q.size(); // Correctly handle the number of nodes at the current level
        vector<int> level;
        for (int i = 0; i < levelSize; i++) {
            TreeNode* temp = q.front();
            q.pop();
            if (flag) {
                // Insert at the end
                level.push_back(temp->val);
            } else {
                // Insert at the beginning to achieve reverse order
                level.insert(level.begin(), temp->val);
            }
            // Always enqueue left child first, then right child
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
        flag = !flag; // Toggle flag to reverse the order for the next level
        ans.push_back(level);
    }
    return ans;
}

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         define the answer 
        vector<vector<int>>ans; 
//         define the flag 
        bool flag = true; 
        ans = zigzaghelper(root,flag); 
        return ans; 
        }
    
};