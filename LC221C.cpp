int maximalSquare(vector<vector<char>>& matrix) {
if(matrix.length == 0) return 0;

int m = matrix.length, n = matrix[0].length;
int max = Integer.MIN_VALUE;

for(int j = 0; j < n && max != 1; ++j) if(matrix[0][j] == '1') max = 1; 
for(int i = 1; i < m && max != 1; ++i) if(matrix[i][0] == '1') max = 1;

for(int i = 1; i < m; ++i){
    for(int j = 1; j < n; ++j){
        if(matrix[i][j] == '1'){
            int s = Math.min(matrix[i-1][j] - '0', Math.min(matrix[i - 1][j - 1] - '0', matrix[i][j-1] - '0')) + 1;
            matrix[i][j] = (char)('0' + s);
            max = Math.max(max, s);
        }
    }
}
return max * max;
}
