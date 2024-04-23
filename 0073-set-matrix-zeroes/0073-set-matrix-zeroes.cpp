class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
//         m x n matrix 
        int m = matrix.size(); 
        int n = matrix[0].size(); 
//         define the vectors to store rows and cols which are zeros 
        vector<int>rows(m,0);
        vector<int>cols(n,0);
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(matrix[i][j] == 0){
                    rows[i] = 1; 
                    cols[j] = 1; 
                }
            }
        }
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(rows[i] || cols[j]){
                    matrix[i][j] = 0; 
                }
            }
        }
    }
};