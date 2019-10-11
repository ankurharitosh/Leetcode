class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()==0 || nums2.size()==0) return {};
        
        vector<int> result;
        int i=0, j=0, m=nums1.size(), n=nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else if(nums1[i]==nums2[j]){
                result.push_back(nums2[j]);
                i++;
                j++;
            }
            
        }
      
            
        return result;
    }
};
