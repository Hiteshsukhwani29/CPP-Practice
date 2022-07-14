class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int m=0;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1)==s.end()){
                int ctr=1;
                int j=nums[i]+1;
                while(s.find(j)!=s.end()){
                    ctr++;
                    j++;
                }
                m=max(ctr,m);
            }
        }
        return m;
    }
};
