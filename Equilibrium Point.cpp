int equilibriumPoint(long long a[], int n) {
    
        int sum=0;
       for(int i=0;i<n;i++){
           sum+=a[i];
       }
       int lsum=0;
       for(int i=0;i<n;i++){
           if(lsum==sum-a[i]){
               return (int)i+1;
           }
           lsum+=a[i];
           sum-=a[i];
       }
       return -1;
    }

};
