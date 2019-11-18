class Solution {
public:
    int helper(vector<int>& nums){
        int tsum=0, ones=INT_MAX-40001, twos=INT_MAX-40001;
        
        for(int i=0; i<nums.size(); i++){
            tsum+=nums[i];
            if(nums[i]%3==1){
                twos=min(twos, ones + nums[i]);
                ones=min(ones, nums[i]);
            }
            else if(nums[i]%3==2){
                ones=min(ones, twos + nums[i]);
                twos=min(twos, nums[i]);
            }
        }
        
        if(tsum%3==0) 
            return tsum;
        else if(tsum%3==1) 
            return tsum - ones;
        else    
            return tsum - twos;
    }
    int maxSumDivThree(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        return helper(nums);
    }
};
