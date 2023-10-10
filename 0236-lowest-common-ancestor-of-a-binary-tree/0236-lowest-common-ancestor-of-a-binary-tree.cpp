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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

  vector<TreeNode*> path1;
  vector<TreeNode*> path2;

  getPath(root, p, path1);
  getPath(root, q, path2);

  TreeNode* lca = nullptr;
  for(int i = 0; i < min(path1.size(), path2.size()); i++) {
    if(path1[i] == path2[i]) {
      lca = path1[i]; 
    } else {
      break;
    }
  }

  return lca;
}

bool getPath(TreeNode* root, TreeNode* node, vector<TreeNode*>& path) {

  if(!root) return false;

  path.push_back(root);
  if(root == node) return true;
  
  if(getPath(root->left, node, path) || getPath(root->right, node, path)) {
    return true;
  }

  path.pop_back();
  return false;
}
};