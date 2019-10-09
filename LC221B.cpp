class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m= matrix.size();
        if(m==0) return 0;
        int n= matrix[0].size(), max_so_far=0;
        vector<vector<int>> dp(m+1, vector<int> (n+1, 0));
       
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(matrix[i-1][j-1]=='1'){
                    dp[i][j]= min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1;
                    max_so_far= max(max_so_far, dp[i][j]);
                }
            }
        }
        return max_so_far * max_so_far;
    }
};
