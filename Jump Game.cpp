class Solution {
public:
    int jump(vector<int>& nums) {
        int m=0;
        int ctr=0;
        int c=0;
        for(int i=0;i<nums.size()-1;i++){
            m=max(m,nums[i]+i);
            if(c==i){
                c=m;
                ctr++;
            }
        }
        return ctr;
    }
};
