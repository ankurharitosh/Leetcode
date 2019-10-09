class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> ht;
        int n = s.length();
        if(n==0) return 0;
        int left=0, max_so_far=0;
        
        for(int right=0; right<n; right++){
            
            while(ht.find(s[right]) != ht.end()){
                ht.erase(s[left]);
                left++;
                    
            }
            cout<<"("<<left<<", "<<right<<")";  
            ht.insert(s[right]);
            max_so_far= max(max_so_far, right-left+1);
        }
        return max_so_far;
    }
};
