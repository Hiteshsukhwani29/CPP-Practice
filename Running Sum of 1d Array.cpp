class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int ctr=0;
        for(int i=0;i<nums.size();i++){
            ctr+=nums[i];
            ans.push_back(ctr);
        }
        return ans;
    }
};
