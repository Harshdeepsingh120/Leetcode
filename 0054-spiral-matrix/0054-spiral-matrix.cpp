class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size(), m=matrix[0].size();

        int srow=0, scol=0;
        int erow=n-1, ecol=m-1;
        vector<int> ans;
        while(scol<=ecol && srow<=erow){
            //top
            for(int j=scol; j<=ecol; j++){
                ans.push_back(matrix[srow][j]);
            }
            //right
            for(int i=srow+1; i<=erow; i++){
                ans.push_back(matrix[i][ecol]);
            }
            //bottom
            for(int j=ecol-1; j>=scol; j--){
                if(srow==erow){
                    break;
                }
                ans.push_back(matrix[erow][j]);
            }
            //left
            for(int i=erow-1; i>=srow+1; i--){
                if(scol==ecol){
                    break;
                }
                ans.push_back(matrix[i][scol]);
            }
            scol++; srow++;
            ecol--; erow--;
        }
        return ans;
    }
};