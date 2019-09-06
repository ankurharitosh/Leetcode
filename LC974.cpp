class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        unordered_map<int, int> ht;
        int n= A.size(), cumSum=0, count=0, i;
        if(n==0) return 0;
        
        for( i=0; i<n; i++){
            cumSum+=A[i];
            ht[((cumSum % K) + K) % K]++;
        }
        cout<<cumSum<<endl;
        
        for(i=0; i<K; i++){
            if(ht[i]>1)
                count+=(ht[i] * (ht[i]-1))/2;
        }
        
        count+= ht[0];
        
        return count;
    }
};
