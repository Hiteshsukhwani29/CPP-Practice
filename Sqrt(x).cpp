class Solution {
public:
    int mySqrt(int x) {
        
        long int s=1,e=x;
        int ans=0;
        while(s<=e){
            long int mid=(s+e)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid<x){
                s=mid+1;
                ans=mid;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
};
