class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int sp=-1,ep=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                sp=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==target){
                ep=i;
                break;
            }
        }
        v.push_back(sp);
        v.push_back(ep);
        return v;
    }
};
