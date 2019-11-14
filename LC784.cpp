class Solution {
public:
    void helper(vector<string>& result, string& S, int pos){
        
        result.push_back(S);
        if(pos==S.size()){
            return;
        }
        
        for(int i=pos; i<S.size(); i++){
            
            if((S[i]>='A' && S[i]<='Z') || (S[i]>='a' && S[i]<='z')){
                
                S[i]^=32;
                helper(result, S, i+1);
                S[i]^=32;
                
            }
            
        }
        
    }
    vector<string> letterCasePermutation(string S) {
        
        vector<string> result;
        helper(result, S, 0);
        
        return result;
    }
};
