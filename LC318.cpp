class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n= words.size(), result=0;
        if(n==0) return 0;
        vector<int> mask(n, 0);
        
        for(int i=0; i<n; i++)
            for(char c : words[i])
                mask[i]|=(1<<(c-'a'));
        
        for(int i=0; i<n; i++)
            for(int j=i; j<n; j++)
                if((mask[i] & mask[j]) == 0)
                    result = max(result, int(words[i].size() * words[j].size()));
        
        return result;
        
    }
};
