class Solution {
public:
    void generateAnswer(vector<vector<int>>& result, vector<int>& nums, int j){
        if(j==nums.size()){
            result.push_back(nums);
            return;
        }
        for(int i=j; i<nums.size(); i++){
            swap(nums[i], nums[j]);
            generateAnswer(result, nums, j+1);
            swap(nums[i], nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return {{}};
        
        vector<vector<int>> result;
        
        generateAnswer(result, nums, 0);
        return result;
    }
};
