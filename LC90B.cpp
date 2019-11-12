class Solution {
public:
    void generateAnswer(vector<int>& nums, vector<vector<int>>& result, vector<int>& partial, int j){
        result.push_back(partial);
        
        for(int i=j; i<nums.size(); i++){
            if(i!=j && nums[i]==nums[i-1]) continue;
            partial.push_back(nums[i]);
            generateAnswer(nums, result, partial, i+1);
            partial.pop_back();
            
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return {};
        sort(nums.begin(), nums.begin() + n);
        vector<vector<int>> result;
        vector<int> partial;
        sort(nums.begin(), nums.begin()+n);
        generateAnswer(nums, result, partial, 0);
        
        return result;
    }
};
