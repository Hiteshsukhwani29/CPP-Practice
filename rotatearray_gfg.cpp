void rotateArr(int arr[], int d, int n){
        d=d%n;
        int a[d];
        for(int i=0;i<d;i++){
            a[i]=arr[i];
        }
        for(int i=0;i<n-d;i++){
            arr[i]=arr[i+d];
        }
        int s=0;
        for(int i=n-d;i<n;i++){
            arr[i]=a[s++];
        }
}
