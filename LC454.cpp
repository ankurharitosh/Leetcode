class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        int count=0;
        unordered_map<int, int> ht;
        for(int a : A)
            for(int b : B)
                ht[a+b]++;
        
        for(int c : C)
            for(int d : D)
                count+=ht[-c-d];
        return count;
        
    }
};
