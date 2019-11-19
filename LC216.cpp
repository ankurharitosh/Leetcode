class Solution {
public:
    void backtracking(vector<vector<int>>& result, int n, int k, vector<int>& partial, int sum, int pos){
        if(partial.size()==k && sum==n){
            result.push_back(partial);
            return;
        }
        if(sum>n || partial.size()>k) return;
        for(int i=pos; i<=9; i++){
            
            partial.push_back(i);
            sum+=i;
            //cout<<i<<pos<<sum<<endl;
            backtracking(result, n, k, partial, sum, i+1);
            sum-=i;
            partial.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        if(n==0) return {};
        
        vector<int> partial;
        vector<vector<int>> result;
        backtracking(result, n, k, partial, 0, 1);
        return result;
    }
};
