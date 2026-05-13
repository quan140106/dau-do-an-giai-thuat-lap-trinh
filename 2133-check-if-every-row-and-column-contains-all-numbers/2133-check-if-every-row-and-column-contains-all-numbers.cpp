class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            vector<int> row(n +1,0);
            vector<int> col(n +1,0);

            for(int j=0;j<n;j++){
                row[matrix[i][j]]++;
                col[matrix[j][i]]++;
                if(row[matrix[i][j]]>1 || col[matrix[j][i]] >1)
                return false;
            }
        }
        return true;

    }
};