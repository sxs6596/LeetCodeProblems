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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        // we perform the level order traversal. 
       queue<pair<TreeNode*, pair<int, int>>>q; 
        // define the map to store the popped values. 
        map<int, map<int, multiset<int>>>mp; // vertical, level, list to hold level values in sorted order. 
        
        q.push({root, {0,0}});
        
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            TreeNode* node = it.first; 
            // level
            int x = it.second.first; 
            // vertical 
            int y = it.second.second; 
            
            mp[y][x].insert(node->val); 
            
            if(node->left){
                q.push({node->left, {x+1, y-1}});
            }
            if(node->right){
                q.push({node->right,{x+1, y+1}});
            }
        }
        // define the ans to store 
        vector<vector<int>>ans; 
        for(auto p : mp){
            vector<int>level; 
            for(auto q: p.second){
                level.insert(level.end(), q.second.begin(), q.second.end());
            }
            ans.push_back(level);
        }
        return ans; 
    }
};