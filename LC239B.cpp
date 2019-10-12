class Solution {
    typedef pair<int, int> Pair;
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size(), max_elem=0, curr_max=INT_MIN;;
        if(n==0) return {};
        
        vector<int> result;
        deque<int> buffer;
        
        for(int i=0; i<n; i++){
            while(!buffer.empty() && nums[i]>=nums[buffer.back()])
                buffer.pop_back();
            buffer.push_back(i);
            if(buffer.front()<i-k+1) buffer.pop_front();
            if(i>=k-1)
                result.push_back(nums[buffer.front()]);
        }
        
        return result;
    }
};
