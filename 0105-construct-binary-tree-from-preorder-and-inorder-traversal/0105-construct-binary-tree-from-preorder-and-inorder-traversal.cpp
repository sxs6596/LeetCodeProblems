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
    TreeNode* buildTree(vector<int>&preorder, int preStart, int preEnd, vector<int>&inorder, int inStart, int inEnd, map<int,int>&inMap){
        if(preStart > preEnd || inStart > inEnd ) return nullptr; 
//         get the root 
        TreeNode* root = new TreeNode(preorder[preStart]); 
        int inRoot = inMap[root->val];
        int numsLeft = inRoot-inStart; 
//         Build left sub tree 
        root->left = buildTree(preorder, preStart+1, preStart+numsLeft,inorder, inStart, inRoot-1, inMap);
//         Build Right sub tree 
        root->right = buildTree(preorder, preStart+numsLeft+1, preEnd, inorder,inRoot+1, inEnd, inMap); 
        return root; 
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         define the hashmap for the inorder 
        map<int,int>inMap; 
        for(int i =0;i<inorder.size();i++){
            inMap[inorder[i]] = i;
        }
//         define the pointers 
        int preStart = 0;
        int preEnd = preorder.size()-1; 
        int inStart = 0;
        int inEnd = inorder.size()-1; 
        TreeNode* root = buildTree(preorder, preStart, preEnd, inorder, inStart, inEnd, inMap); 
       return root;  
    }
};