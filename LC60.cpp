class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> factorial(n+1, 1);
        vector<char> chars(n);
        
        for(int i=1; i<=n; i++){
            factorial[i]=factorial[i-1]*(i);
            chars[i-1]=i+'0';
        }
        string s;
        k--;
        int pos=0;
        for(int i=1; i<=n; i++){
            int index= k/factorial[n-i];
            s.push_back(chars[index]);
            vector<char>::iterator it=chars.begin()+index;
            chars.erase(it);
            k-=index*factorial[n-i];
        }
        return s;
    }
    
};
