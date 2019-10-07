class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m= matrix.size();
        if(m==0) return 0;
        int n= matrix[0].size(), max_so_far=0, max_now;
        bool flag;
        for(int i=0; i<m; i++){
            for(int j= 0; j<n; j++){
                if(matrix[i][j]=='1'){
                    max_now=1;
                    flag=true;
                    while(max_now+i < m && max_now + j < n && flag){
                        for(int k=i; k<=max_now+i; k++)
                            if(matrix[k][max_now+j]=='0'){
                                flag=false; 
                                break;
                            }
                        for(int k=j; k<=max_now+j; k++)
                            if(matrix[max_now+i][k]=='0'){
                                flag=false; 
                                break;
                            }
                            
                        if(flag)
                            max_now++;
                    }
                    max_so_far= max(max_so_far, max_now);
                }
            }
        }
        
        return max_so_far * max_so_far;
    }
};
