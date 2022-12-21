class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        for(int i=0;i<nums1.size();i++){
            temp.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            temp.push_back(nums2[i]);
        }
        sort(temp.begin(),temp.end());
        if(temp.size()%2==0){
            double t = temp[temp.size()/2]+temp[(temp.size()-1)/2];
            return t/2;
        }
        else{
            return temp[temp.size()/2];
        }
        return -1;
    }
};
