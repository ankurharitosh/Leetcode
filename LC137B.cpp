class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        
        int ones=0, twos=0, common_bitmask=0;
        
        for(int i=0; i<n; i++){
            twos|= (ones&nums[i]);
            ones^=nums[i];
            common_bitmask=~(ones&twos);
            ones=ones&common_bitmask;
            twos=twos&common_bitmask;
        }
        return ones;
        
    }
};
