class Solution {
public:
    void generateAnswer(vector<int>& nums, vector<vector<int>>& result){
        for(int i=0; i<n; i++){
            int count=0;
            while(i+count<n && nums[i]==nums[i+count]) count++;
            int p=result.size();
            for(int j=0; j<p; j++){
                vector<int> partial=result[j];
                for(int k=0; k<count; k++){
                    partial.push_back(nums[i]);
                    result.push_back(partial);
                }
            }
            i+=count-1;
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return {};
        sort(nums.begin(), nums.begin() + n);
        vector<vector<int>> result = {{}};
        
        generateAnswer(nums, result);
        
        return result;
    }
};
