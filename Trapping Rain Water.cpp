class Solution {
public:
    int trap(vector<int>& height) {
        int ctr=0;
        vector<int> l(height.size(),0),r(height.size(),0);
        if(height.size()<=2) { 
            return 0;
        }
        l[0]=height[0];
        r[height.size()-1]=height[height.size()-1];
        for(int i=1;i<height.size();i++){
            l[i]=max(l[i-1],height[i]);
            r[height.size()-i-1]=max(r[height.size()-i],height[height.size()-i-1]);
        }
        for(int i=0;i<height.size();i++){
            ctr+=min(l[i],r[i])-height[i];
        }
        return ctr;
    }
};
