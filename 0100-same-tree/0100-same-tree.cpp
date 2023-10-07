class Solution {
public:

    void DFS(TreeNode* root, vector<int>& temp){

        if(root == nullptr){
            temp.push_back(-1001); 
            return;
        }

        temp.push_back(root->val);
        
        DFS(root->left, temp);       
        DFS(root->right, temp);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {

        vector<int> pvec;
        vector<int> qvec;
        
        DFS(p, pvec);
        DFS(q, qvec);
        
        if(pvec.size() != qvec.size()) {
            return false;
        }
        
        for(int i=0; i<pvec.size(); i++) {
            if(pvec[i] != qvec[i]) {
                return false;
            }
        }
        
        return true;
    }
};