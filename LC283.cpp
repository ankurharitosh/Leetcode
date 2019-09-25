class Solution {
public:
 
    
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(), curr_zero=0;
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                swap(nums[curr_zero++], nums[i]);
            }
        }
        
    }
};
