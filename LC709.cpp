class Solution {
public:
    string toLowerCase(string str) {
        int n=str.size();
        if(n==0) return "";
        
        for(int i=0; i<n; i++)
            if((int)str[i]<92 && (int)str[i]>=65)
                str[i]+=32;
        
        return str;
    }
};
