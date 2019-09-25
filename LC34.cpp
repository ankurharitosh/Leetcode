class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>::iterator lower = lower_bound(nums.begin(), nums.end(), target);
        if(lower == nums.end() || *lower != target)
            return {-1, -1};
        
        vector<int>::iterator upper = upper_bound(lower, nums.end(), target);
        
        return {lower - nums.begin(), upper - nums.begin()-1};
        
    }
};
