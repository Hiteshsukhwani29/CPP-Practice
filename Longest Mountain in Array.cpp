class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int m=0;
        for(int i=1;i<arr.size()-1;){
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                int j=i,ctr=1;
                while(j>=1&&arr[j]>arr[j-1]){
                    j--;
                    ctr++;
                }
                while(i<arr.size()-1&&arr[i]>arr[i+1]){
                    i++;
                    ctr++;
                }
                m=max(m,ctr);
            }
            else{
                i++;
            }
        }
        return m;
    }
};
