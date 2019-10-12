class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        if(n==0 || n==1) return 0;
        
        int left=0, right=n-1, area=0, max_area=0;
        
        while(right>left){
            area= (right - left) * min(height[left], height[right]);
            max_area= max(max_area, area);
            if(height[left]> height[right]) right--;
            else left++;
        }
        return max_area;
    }
};
