class Solution {
public:
    void helper(vector<vector<int>>& result, vector<int>& partial, int &n, int k, int pos){
        if(k==0){
            result.push_back(partial);
            return;
        }
        
        for(int i=pos; i<=n; i++){
            
            partial.push_back(i);
            helper(result, partial, n, k-1, i+1);
            partial.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> partial;
        
        helper(result, partial, n, k, 1);
        return result;
    }
};
