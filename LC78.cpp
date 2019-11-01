class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return {{}};
        vector<vector<int>> result;
        result.push_back({});
        
        
        for(int i=0; i<n; i++){
            int r=result.size();
            for(int j=0; j<r; j++){
                vector<int> partial=result[j];
                
                partial.push_back(nums[i]);
                result.push_back(partial);
            }
            
        }
        
        return result;
    }
};
