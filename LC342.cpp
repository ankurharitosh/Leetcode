class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num==1) return true;
        int i=0, count=0;
        while(i<32){
            if(i<2 || i%2 != 0){
                if((num>>i) & 1 ==1){
                    return false;
                }
            }            
            else if(i%2==0){]
                if((num>>i) & 1 ==1){
                    count++;
                }
            }
            i++;
        }
        return (count == 1);
    }
};
