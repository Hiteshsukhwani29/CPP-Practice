class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ctr=0,k=0;
        unordered_map<char, int> m;
        for(int j=0;j<s.length();j++) {
            if(m.find(s[j])!=m.end()) {
                if(m[s[j]]>=k) {
                    k=m[s[j]]+1;
                }
                m[s[j]]=j;
            }            
            else {
            m.insert({s[j], j});                    
            }    
            ctr=(ctr>(j-k+1))?ctr:(j-k+1);
        }
        return ctr;
    }
};
