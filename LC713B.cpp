class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k == 0) return 0;
        int n = nums.size();
        double logk = log(k);
        int ans = 0;
        vector<double> pre(n + 1,0);
        for(int i = 1; i <= n; ++i){
            pre[i] = pre[i-1] + log(nums[i-1]);
        }
        for(int i = 0; i < n; ++i){
            auto it = lower_bound(pre.begin() + i + 1,pre.end(),pre[i] + logk);
            it--;
            ans += distance(pre.begin()+i,it);
        }
        return ans;
    }
};
