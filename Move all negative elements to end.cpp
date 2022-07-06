class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int j=0,b[n],c[n],k=0,ctr=0;
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                b[j]=arr[i];
                j++;
            }
            if(arr[i]<0){
                c[k]=arr[i];
                k++;
            }
        }
        for(int i=0;i<j;i++){
            arr[i]=b[i];
            ctr++;
        }
        k=0;
        for(int i=ctr;i<n;i++){
            arr[i]=c[k];
            k++;
        }
    }
};
