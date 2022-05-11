class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        int ctr=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                arr[i]=0;ctr++;
            }
        }
        for(int j=ctr;j>=0;j--){
            arr[n-j]=1;
        }
    }
};
