class Solution {
public:
    void generateAnswer(vector<vector<int>>& result, unordered_map<int, int>& ht, vector<int>& partial, int n){
        if(partial.size()==n){
            result.push_back(partial);
            return;
        }
        for(auto &i : ht){
            if(ht[i.first]<=0) continue;
            ht[i.first]--;
            
            partial.push_back(i.first);
            generateAnswer(result, ht, partial, n);
            partial.pop_back();
            
            ht[i.first]++;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return {{}};
        vector<int> partial;
        vector<vector<int>> result;
        unordered_map<int, int> ht;
        for(int element : nums)
            ht[element]++;
        
        generateAnswer(result, ht, partial, n);
        return result;
    }
};
