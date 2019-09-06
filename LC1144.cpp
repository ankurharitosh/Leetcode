class Solution {
public:
    
    int ZigzagUtil(vector<int> nums, int index){
        int n=nums.size(), left, right, value=0;
        for(int i=index; i<n; i+=2){
            left=(i-1>=0)?nums[i-1]:INT_MAX;
            right=(i+1<n)?nums[i+1]:INT_MAX;
            value+= max(0, nums[i] - min(left, right) + 1);
        }
        return value;
    }
    
    int movesToMakeZigzag(vector<int>& nums) {
        int n=nums.size();
        if(n<=1) return 0; 
        
        return min(ZigzagUtil(nums, 0), ZigzagUtil(nums, 1));
        
    }
};
