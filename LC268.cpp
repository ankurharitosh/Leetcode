class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        
        int ans=0;
        for(int i=0; i<n; i++){
            ans^=(i+1)^nums[i]; // match pairs from 0 to n, odd one out is answer
        }
        
        return ans;
    }
};
