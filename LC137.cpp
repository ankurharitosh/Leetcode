class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size(), ans=0, set=0;
        if(n==0) return 0;
        vector<int> count_one_bits(32, 0);
        
        for(int i=0; i<n; i++){
            int number = nums[i];
            
            for(int j=0; j<32; j++){
                count_one_bits[j]+= number & 1;
                number>>=1;
            }
        }
        
        for(int j=0; j<32; j++){
                set = count_one_bits[j]%3;
                if(set)
                    ans+= (1<<j);
        }
        return ans;
    }
};
