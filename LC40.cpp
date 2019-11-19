class Solution {
public:
    void backtracking(vector<vector<int>>& result, vector<int>& candidates, int target, vector<int>& partial, int sum, int pos){
        if(sum==target){
            result.push_back(partial);
            return;
        }
        if(sum>target) return;
        for(int i=pos; i<candidates.size(); i++){
            if(i!=pos && candidates[i]==candidates[i-1]) continue;
            partial.push_back(candidates[i]);
            sum+=candidates[i];
            //cout<<i<<pos<<sum<<endl;
            backtracking(result, candidates, target, partial, sum, i+1);
            sum-=candidates[i];
            partial.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        if(n==0) return {};
        sort(candidates.begin(), candidates.end());
        vector<int> partial;
        vector<vector<int>> result;
        backtracking(result, candidates, target, partial, 0, 0);
        return result;
    }
};
