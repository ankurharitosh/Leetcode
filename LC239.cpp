class Solution {
    typedef pair<int, int> Pair;
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size(), max_elem=0, curr_max=INT_MIN;;
        if(n==0) return {};
        
        vector<int> result;
        
        priority_queue<Pair> pq;
        
        for(int i=0; i<n; i++){
            if(i<k) {
                pq.push(Pair(nums[i], i));
                if(i==k-1) result.push_back(pq.top().first);
            }
            else{
                pq.push(Pair(nums[i], i));
                while(!pq.empty() && pq.top().second<i-k+1) pq.pop();
                result.push_back(pq.top().first);
            }
            
        }
        
        return result;
    }
};
