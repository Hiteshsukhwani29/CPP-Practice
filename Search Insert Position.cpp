class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int m;
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            m=(s+e)/2;
            if(target==nums[m]){
                return m;
            }
            if(nums[m]>target){
                e=m-1;
            }
            if(nums[m]<target){
                s=m+1;
            }
        }
        return s;
    }
};
