class Solution {
public:
    void helper(vector<string>& result, unordered_map<char, vector<char>>& ht, string& digits, string& partial, int pos){
        if(partial.size()==digits.size()){
            result.push_back(partial);
            return;
        }
        
        for(int i=pos; i<digits.size(); i++){
            for(int j=0; j<ht[digits[i]].size(); j++){
                partial.push_back(ht[digits[i]][j]);
                helper(result, ht, digits, partial, i+1);
                partial.pop_back();
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        unordered_map<char, vector<char>> ht({{'2', {'a', 'b', 'c'}}, {'3', {'d', 'e', 'f'}}, {'4',{'g', 'h', 'i'}}, {'5',{'j', 'k', 'l'}}, {'6',{'m', 'n', 'o'}},{'7',{'p', 'q', 'r', 's'}}, {'8',{'t', 'u', 'v'}}, {'9',{'w', 'x', 'y', 'z'}}});
        
        vector<string> result;
        string partial;
        helper(result, ht, digits, partial, 0);
        return result;
    }
};
