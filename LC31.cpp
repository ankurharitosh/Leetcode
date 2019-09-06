class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()<=1) return;
        int n= nums.size(), pos, i;
        
        for(i=n-1; i>=1; i--){
            if(nums[i-1]<nums[i])
               break;
        }
        if(i==0) return reverse(nums.begin(), nums.end());
        pos=i-1;
        
        for(i=n-1; i>pos && i>=0; i--){
            if(nums[i]>nums[pos]){
                swap(nums[i], nums[pos]);
                break;
            }
        }
        reverse(nums.begin() + pos+1, nums.end());
    }
};
