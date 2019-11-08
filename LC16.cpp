class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size(), ans=0, min=INT_MAX;
        sort(nums.begin(), nums.begin()+n);
        
        for(int i=0; i<n; i++){
            int j=i+1, k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if((abs(sum-target))<min){
                    min=abs(sum-target);
                    ans=sum;
                }
                if(sum>target) k--;
                else if(sum<target) j++;
                else{
                    while(j<k && nums[j]==nums[j+1]) j++;
                    while(j<k && nums[k]==nums[k-1]) k--;
                    j++;
                    k--;
                }
                while(i<n-1 && nums[i]==nums[i+1]) i++;
            }
        }
        return ans;
    }
};
