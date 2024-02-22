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
    void levelOrderTraversal(TreeNode*root, vector<vector<int>>&ans){
        // base case 
        if(root == nullptr){
            return; 
        }
//         define the queue. 
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
//             define the size of the queue 
            int size = q.size();
//             define the level vector 
            vector<int>level; 
            for(int i =0;i<size;i++){
                TreeNode*curr = q.front();
                q.pop();
                if(curr->left){
                    q.push(curr->left); 
                }
                if(curr->right){
                    q.push(curr->right); 
                }
                level.push_back(curr->val);
            }
            ans.push_back(level);
        }
    }
    int countNodes(TreeNode* root) {
        vector<vector<int>>ans; 
        levelOrderTraversal(root, ans); 
        int nodeCount = 0;
    for (const auto& level : ans) {
        nodeCount += level.size(); // Sum up the sizes of each level's vector.
    }
    return nodeCount;
    }
};