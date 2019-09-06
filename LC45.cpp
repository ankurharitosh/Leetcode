class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size(), max_so_far=nums[0], steps=nums[0], jump=1;
        if(n<=1) return 0;
        
        for(int i=1; i<n; i++){
            max_so_far=max(max_so_far, i + nums[i]);
            
            if(i==n-1) return jump;
            
            steps--;
            
            if(steps==0){
                jump++;
                if(i>max_so_far) return -1;
                steps= max_so_far - i;
            }
        }
        return -1;
    }
};
