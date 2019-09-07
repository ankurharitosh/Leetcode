class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n= nums.size(), cumSum=0, count=0;
        if(n==0) return 0;
        
        unordered_map<int, int> ht;
        ht[0]=1;
        
        for(int i=0; i<n; i++){
            cumSum+=nums[i];
            
            if(ht.find(cumSum-k) != ht.end())
                count+=ht[cumSum-k];
            
            ht[cumSum]++;
        }
        return count;
    }
};
