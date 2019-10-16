class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t x=0, ans=0;
        
        for(int i=0; i<32; i++){
            x = 0;
            x= (n>>i)&1;
            ans|=(x<<(31-i));
        }
        return ans;
    }
};
