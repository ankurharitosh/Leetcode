class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m= matrix.size();
        if(m==0) return 0;
        int n= matrix[0].size(), max_so_far=0;
        vector<int> prev(n, 0), curr(n, 0);
        
        
       
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i==0 || j==0 || matrix[i][j]=='0') curr[j]=matrix[i][j]-'0';
                else{
                    curr[j]= min(curr[j-1], min(prev[j], prev[j-1])) + 1;
                }
                max_so_far= max(max_so_far, curr[j]);
            }
            for(int k=0; k<n; k++)
                prev[k]=0;
            swap(curr, prev);
        }
        return max_so_far * max_so_far;
    }
};
