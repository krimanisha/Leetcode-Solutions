class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans;
        vector<int> arr;
        int n = mat.size();
        int m = mat[0].size();
        if(n*m != r*c ) return mat;
        
        for(int i =0;i<n;i++){
            for(int  j = 0;j<m;j++){
               arr.push_back(mat[i][j]); 
            }
        }
        int idx = 0;
        for(int i = 0;i<r;i++){
            vector<int> temp;
            for(int j = 0;j<c;j++){
                
                temp.push_back(arr[idx++]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};