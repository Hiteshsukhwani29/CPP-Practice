int uniqueElement(vector<int> arr, int n)
{
    for(int i=0;i<n;i=i+2){
        if(arr[i]!=arr[i+1]){
            return arr[i];
        }
    }
}
