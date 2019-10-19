class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0) return {};
        
        vector<int> result;
        unordered_map<int, int> ht;
        
        for(int i=0; i<n; i++){
            if(ht.find(target-nums[i])!=ht.end()){
                result.push_back(ht[target-nums[i]]);
                result.push_back(i);
            }
            ht[nums[i]] = i;
        }
        return result;
    }
};
