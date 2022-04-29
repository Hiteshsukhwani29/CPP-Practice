long long int minValue(int a[], int b[], int n)
    {
       long long int sum=0;
       sort(a,a+n);
       sort(b,b+n);
       for(long long int i=0,j=n-1;i<n,j>=0;i++,j--){
           long long int num=(a[i]*b[j]);
           sum+=num;
       }
       return sum;
    }
