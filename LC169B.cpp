class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=0, count;
        for(int i=0; i<32; i++){
            count=0;
            for(int num : nums)
                count+= (num>>i) & 1;
            ans|=(count>(nums.size()/2))<<i;
        }
        return ans;
    }
};
