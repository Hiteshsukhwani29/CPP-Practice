class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int s=0;
        int t=(n*(n+1))/2;
        for(int i=0;i<n-1;i++){
            s+=array[i];
        }
        return t-s;
    }
};
