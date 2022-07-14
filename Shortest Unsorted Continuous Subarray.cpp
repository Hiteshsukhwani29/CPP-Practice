class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp=nums;
        int ctr=0;
        int m1=0,m2=0;
        sort(temp.begin(),temp.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=temp[i]){
                m1=i;break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]!=temp[i]){
                m2=i;break;
            }
        }
        if(m2-m1==0){
            return 0;
        }
        else{
            return m2-m1+1;
        }
    }
};
