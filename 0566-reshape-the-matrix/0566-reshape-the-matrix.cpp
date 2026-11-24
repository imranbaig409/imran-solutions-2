class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
     int m = mat.size();
        int n = mat[0].size();
        
        // If total elements don't match, reshape is impossible
        if (m * n != r * c) {
            return mat;
        }
        
        vector<vector<int>> res(r, vector<int>(c));
        
        // Use a 1D loop to flatten and remap indices efficiently
        for (int i = 0; i < m * n; ++i) {
            res[i / c][i % c] = mat[i / n][i % n];
        }
        
        return res;    
    }
};