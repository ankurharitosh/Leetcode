class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        vector<int> ht(101, 0);
        
        for(int i=0; i<n; i++)
            ht[heights[i]]++;
        
        int ans=0, hptr=1;
        
        for(int i=0; i<n; i++){
            while(ht[hptr]==0) hptr++;
            
            if(hptr != heights[i]) ans++;
            
            ht[hptr]--;
        }
        return ans;
    }
};
