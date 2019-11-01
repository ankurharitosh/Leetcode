class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size(), p= 1<<n;
        if(n==0) return {{}};
        vector<vector<int>> results(p);
        
        for(int i=0; i<p; i++){
            for(int j=0; j<n; j++){
                if(i>>j & 1 == 1)
                    results[i].push_back(nums[j]);
            }
        }
        return results;
    }
};
