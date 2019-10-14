class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size(), i=0;
        if(n==0) return 1;
        
        for(int i=0; i<n; i++){
            while( nums[i]>0 && nums[i]<=n && nums[nums[i]-1] != nums[i])
                swap(nums[nums[i]-1], nums[i]);
        //swapped in correct positions
        }
        for(int i=0; i<n; i++){
            if(nums[i]!=i+1)
                return i+1; //out of place detected
        }
        return n+1;
    }
};
