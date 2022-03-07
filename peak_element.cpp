class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
      int l=0,li=0;
      for(int i=0;i<n;i++){
      if(arr[i]>l){
          l=arr[i];
          li=i;
      }
   }
   return li;
    }
};
