class Solution {
public:
    int helper(vector<int>& nums){
        vector<int> dp(3, 0), dp2;
        
        for(int i=0; i<nums.size(); i++){
            dp2=dp;
            for(int j=0; j<3; j++)
                dp[(dp2[j]+nums[i])%3]=max(dp[(dp2[j]+nums[i])%3], dp2[j]+nums[i]);
        }
        return dp[0];
    }
    int maxSumDivThree(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        return helper(nums);
    }
};
