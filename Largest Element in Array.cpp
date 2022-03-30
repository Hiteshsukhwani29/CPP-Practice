int largest(int arr[], int n) {
    int m=0;
    for(int i=0;i<n;i++){
        m = max(m,arr[i]);
    }
    return m;
    
}
