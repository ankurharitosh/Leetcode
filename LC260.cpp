class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return {};
        int mask=0, group1=0, group2=0;
        
        for(int i=0; i<n; i++){
            mask^=nums[i];
        }
        
        mask= mask & ~(mask-1);
        
        for(int i=0; i<n; i++){
            if((nums[i]&mask)==0)
                group1^=nums[i];
            else
                group2^=nums[i];
        }
        return {group1, group2};
    }
};
